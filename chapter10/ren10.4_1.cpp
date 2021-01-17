#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class list {
public:
    list *head;
    list *tail;
    list *next;
    int num;
    list() { head = tail = next = NULL; }
    virtual void store(int i) = 0;
    virtual int retrieve() = 0;
};

class queue : public list {
public:
    void store(int i);
    int retrieve();
};

void queue::store(int i)
{
    list *item;
    item = new queue;

    if (!item) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    item->num = i;

    if (tail) tail->next = item;
    tail = item;
    item->next = NULL;
    if (!head) head = tail;
}

int queue::retrieve()
{
    int i;
    list *p;

    if (!head) {
        cout << "リストは空です\n";
        return 0;
    }
    i = head->num;
    p = head;
    head = head->next;
    delete p;
    return i;
}

class stack : public list {
public:
    void store(int i);
    int retrieve();
};

void stack::store(int i)
{
    list *item;
    item = new stack;

    if (!item) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    item->num = i;

    if (head) item->next = head;
    head = item;
    if (!tail) tail = head;
}

int stack::retrieve()
{
    int i;
    list *p;

    if (!head) {
        cout << "リストは空です\n";
        return 0;
    }

    i = head->num;
    p = head;
    head = head->next;
    delete p;
    return i;
}

class sorted : public list {
public:
    void store(int i);
    int retrieve();
};

void sorted::store(int i)
{
    list *item;
    list *p, *p2;
    item = new sorted;

    if (!item) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    item->num = i;

    p = head;
    p2 = NULL;
    while (p) {
        if (p->num > i) {
            item->next = p;
            if (p2) p2->next = item;
            if (p==head) head = item;
            break;
        }
        p2 = p;
        p = p->next;
    }
    if (!p) {
        if (tail) tail->next = item;
        tail = item;
        item->next = NULL;
    }
    if (!head)
        head = item;
}


int sorted::retrieve()
{
    int i;
    list *p;

    if (!head) {
        cout << "リストは空です\n";
        return 0;
    }

    i = head->num;
    p = head;
    head = head->next;
    delete p;
    return i;
}

int main()
{
    list *p;
    queue q_ob;
    p = &q_ob;

    p->store(1);
    p->store(2);
    p->store(3);

    cout << "キュー: ";
    cout << p->retrieve();
    cout << p->retrieve();
    cout << p->retrieve();

    cout << "\n";

    stack s_ob;
    p = &s_ob;

    p->store(1);
    p->store(2);
    p->store(3);

    cout << "スタック: ";
    cout << p->retrieve();
    cout << p->retrieve();
    cout << p->retrieve();

    cout << "\n";

    sorted st_ob;
    p = &st_ob;

    p->store(5);
    p->store(6);
    p->store(2);

    cout << "ソート: ";
    cout << p->retrieve();
    cout << p->retrieve();
    cout << p->retrieve();

    cout << "\n";

    return 0;
}
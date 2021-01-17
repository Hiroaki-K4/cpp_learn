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

int main()
{
    list *p;
    stack s_ob;
    queue q_ob;
    char ch;
    int i;

    for (i = 0; i < 10; i++) {
        cout << "スタックかキューを選択してください (S/Q):";
        cin >> ch;
        ch = tolower(ch);
        if (ch == 'q') p = &q_ob;
        else p = &s_ob;
        p->store(i);
    }

    cout << "Tを入力すると終了します\n";
    for (;;) {
        cout << "スタックとキューのどちらから取り除きますか (S/Q):";
        cin >> ch;
        ch = tolower(ch);
        if (ch == 't') break;
        if (ch == 'q') p = &q_ob;
        else p = &s_ob;
        cout << p->retrieve() << endl;
    }

    cout << "\n";
    return 0;
}
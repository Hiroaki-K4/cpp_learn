#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


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
    queue operator+(int i) { store(i); return *this; }
    int  operator--(int unused) { return retrieve(); }
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
    stack operator+(int i) { store(i); return *this; }
    int operator--(int unused) { return retrieve(); }
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
    queue q_ob;
    
    q_ob + 1;
    q_ob + 2;
    q_ob + 3;

    cout << "キュー: ";
    cout << q_ob--;
    cout << q_ob--;
    cout << q_ob--;

    cout << "\n";

    stack s_ob;

    s_ob + 1;
    s_ob + 2;
    s_ob + 3;

    cout << "スタック: ";
    cout << s_ob--;
    cout << s_ob--;
    cout << s_ob--;

    cout << "\n";

    return 0;
}
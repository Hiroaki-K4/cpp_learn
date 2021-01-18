#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;

#define SIZE 10

template <class QueueType> class queue {
    QueueType stck[SIZE];
    int tos;
    int head;
public:
    void init() { tos = 0; head = 0; }
    void push(QueueType ch);
    QueueType pop();
};

template <class QueueType>
void queue<QueueType>::push(QueueType ch)
{
    if (tos == SIZE) {
        cout << "スタックは一杯です" << endl;
        return;
    }
    stck[tos] = ch;
    tos++;
}

template <class QueueType>
QueueType queue<QueueType>::pop()
{
    if (head == tos) {
        cout << "スタックは空です" << endl;
        return 0;
    }
    head++;
    return stck[head - 1];
}


int main()
{
    queue<char> s1, s2;
    s1.init();
    s2.init();
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    
    int i;
    for (i = 0; i < 3; i++) cout << s1.pop() << endl;
    for (i = 0; i < 3; i++) cout << s2.pop() << endl;
    return 0;
}
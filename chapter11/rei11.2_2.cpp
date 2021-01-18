#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


#define SIZE 10

template <class StackType> class stack {
    StackType stck[SIZE];
    int tos;
public:
    void init() { tos = 0; }
    void push(StackType ch);
    StackType pop();
};

template <class StackType>
void stack<StackType>::push(StackType ob)
{
    if (tos==SIZE) {
        cout << "スタックは一杯です\n";
        return;
    }
    stck[tos] = ob;
    tos++;
}

template <class StackType>
StackType stack<StackType>::pop()
{
    if (tos==0) {
        cout << "スタックは空です\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main()
{
    stack<char> s1, s2;
    int i;

    s1.init();
    s2.init();
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for (i = 0; i < 3; i++) cout << "s1をポップする: " << s1.pop() << endl;
    for (i = 0; i < 3; i++) cout << "s2をポップする: " << s2.pop() << endl;

    stack<double> ds1, ds2;
    ds1.init();
    ds2.init();

    ds1.push(1.1);
    ds2.push(2.2);
    ds1.push(3.3);
    ds2.push(4.4);
    ds1.push(5.5);
    ds2.push(6.6);

    for (i = 0; i < 3; i++) cout << "ds1をポップする: " << ds1.pop() << endl;
    for (i = 0; i < 3; i++) cout << "ds2をポップする: " << ds2.pop() << endl;

    return 0;
}
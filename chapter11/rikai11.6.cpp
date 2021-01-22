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
    StackType stck[SIZE][2];
    int tos;
public:
    void init() { tos = 0; }
    void push(StackType ob1, StackType ob2);
    StackType pop(StackType &ob2);
};

template <class StackType>
void stack<StackType>::push(StackType ob1, StackType ob2)
{
    try {
        if (tos==SIZE) {
            throw 1;
        }
        stck[tos][0] = ob1;
        stck[tos][1] = ob2;
        tos++;
    }
    catch (int i) {
        cout << "スタックは一杯です\n";
        return;
    }
}

template <class StackType>
StackType stack<StackType>::pop(StackType &ob2)
{
    try {
        if (tos==0) {
            throw 1;
        }
        tos--;
        ob2 = stck[tos][1];
        return stck[tos][0];
    }
    catch (int i) {
        cout << "スタックは空です\n";
        return 0;
    }
}

int main()
{
    stack<char> s1, s2;
    int i;
    char ch;

    s1.init();
    s2.init();
    s1.push('a', 'b');
    s2.push('x', 'z');
    s1.push('b', 'd');
    s2.push('y', 'e');
    s1.push('c', 'a');
    s2.push('z', 'x');

    for (i = 0; i < 4; i++) {
        cout << "s1をポップする: " << s1.pop(ch);
        cout << ' ' << ch << endl;
    }
    for (i = 0; i < 4; i++) {
        cout << "s2をポップする: " << s2.pop(ch);
        cout << ' ' << ch << endl;
    }

    // doubleの例
    stack<double> ds1, ds2;
    double d;

    ds1.init();
    ds2.init();
    ds1.push(1.1, 2.0);
    ds2.push(2.2, 3.0);
    ds1.push(3.3, 4.0);
    ds2.push(4.4, 5.0);
    ds1.push(5.5, 6.0);
    ds2.push(6.6, 7.0);

    for (i = 0; i < 3; i++) {
        cout << "ds1をポップする: " << ds1.pop(d);
        cout << ' ' << d << endl;
    }
    for (i = 0; i < 3; i++) {
        cout << "ds2をポップする: " << ds2.pop(d);
        cout << ' ' << d << endl;
    }

    return 0;
}
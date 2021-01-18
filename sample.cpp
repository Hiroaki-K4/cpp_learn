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
    
}
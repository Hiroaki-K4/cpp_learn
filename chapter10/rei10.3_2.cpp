#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class base {
public:
    virtual void func()
    {
        cout << "baseのfunc()を使う\n";
    }
};

class derived1 : public base {
public:
    void func()
    {
        cout << "derived1のfunc()を使う\n";
    }
};

class derived2 : public base {
public:
    void func()
    {
        cout << "derived2のfunc()を使う\n";
    }
};

int main()
{
    base *p;
    base ob1;
    derived1 ob2;
    derived2 ob3;
    p = &ob1;
    p->func();
    p = &ob2;
    p->func();
    p = &ob3;
    p->func();
    return 0;
}
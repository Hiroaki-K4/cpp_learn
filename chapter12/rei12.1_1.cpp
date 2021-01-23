#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class BaseClass {
    virtual void f() {};
    //
};

class Derived1 : public BaseClass {
    //
};

class Derived2 : public BaseClass {
    //
};

int main()
{
    int i;
    BaseClass *p, baseob;
    Derived1 ob1;
    Derived2 ob2;

    cout << "iのtypeidは ";
    cout << typeid(i).name() << endl;

    p = &baseob;
    cout << "pが指しているのはオブジェクトタイプ ";
    cout << typeid(p).name() << endl;

    p = &ob1;
    cout << "pが指しているのはオブジェクトタイプ ";
    cout << typeid(p).name() << endl;

    p = &ob2;
    cout << "pが指しているのはオブジェクトタイプ ";
    cout << typeid(p).name() << endl;

    return 0;
}
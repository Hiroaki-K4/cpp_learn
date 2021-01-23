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

void WhatType(BaseClass &ob)
{
    cout << "obが参照しているのはオブジェクトタイプ ";
    cout << typeid(ob).name() << endl;
}

int main()
{
    BaseClass baseob;
    Derived1 ob1;
    Derived2 ob2;

    WhatType(baseob);
    WhatType(ob1);
    WhatType(ob2);

    return 0;
}
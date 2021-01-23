#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class B {
    virtual void f() {}
};

class D1: public B {
    void f() {}
};

class D2: public B {
    void f() {}
};

int main()
{
    B *p;
    D2 ob2;

    p = dynamic_cast<D2 *> (&ob2);
    if (p) cout << "成功" << endl;
    else cout << "失敗" << endl;

    return 0;
}
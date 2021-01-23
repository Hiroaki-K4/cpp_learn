#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class X {
    virtual void f() {};
};

class Y {
    virtual void f() {};
};

int main()
{
    X x1, x2;
    Y y1;

    if (typeid(x1) == typeid(x2))
        cout << "x1とx2は同じタイプ\n";
    else
        cout << "x1とx2は異なるタイプ\n";

    if (typeid(x1) != typeid(y1))
        cout << "x1とy1は異なるタイプ\n";
    else
        cout << "x1とy1は同じタイプ\n";

    return 0;
}
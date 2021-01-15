#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class base {
    int x;
public:
    void setx(int i) { x = i; }
    int getx() { return x; }
};

class derived : public base {
    int y;
public:
    void sety(int i) { y = i; }
    int gety() { return y; }
};

int main()
{
    base *p;
    base b_ob;
    derived d_ob;

    p = &b_ob;
    p->setx(10);
    cout << "baseクラスのオブジェクト x: " << p->getx() << endl;

    p = &d_ob;
    p->setx(99);

    d_ob.sety(88);
    cout << "derivedクラスのオブジェクト x: " << p->getx() << endl;
    cout << "derivedクラスのオブジェクト y: " << d_ob.gety() << endl;
    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class num {
public:
    int i;
    num(int a) { i = a; }
    virtual void shownum() {
        cout << i << endl;
    }
};

class outhex : public num {
public:
    outhex(int a) : num(a) {};
    void shownum() {
        cout << hex << i << endl;
    }
};

class outoct : public num {
public:
    outoct(int a) : num(a) {};
    void shownum() {
        cout << oct << i << endl;
    }
};

int main()
{
    num *p;
    outhex ob1(10);
    outoct ob2(20);
    p = &ob1;
    p->shownum();
    p = &ob2;
    p->shownum();
    return 0;
}
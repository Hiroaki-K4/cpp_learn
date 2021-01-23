#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class Base {
public:
    virtual void f() { cout << "Baseの内部\n"; }
    //
};

class Derived : public Base {
public:
    void f() { cout << "Derivedの内部\n"; }
};

int main()
{
    Base *bp, b_ob;
    Derived *dp, d_ob;

    dp = dynamic_cast<Derived *> (&d_ob);
    if (dp) {
        cout << "Derived * からDerived *への型変換成功\n";
        dp->f();
    }
    else
        cout << "失敗\n";
    cout << endl;

    bp = dynamic_cast<Base *> (&d_ob);
    if (bp) {
        cout << "Derived * からBase *への型変換成功\n";
        bp->f();
    }
    else
        cout << "失敗\n";
    cout << endl;

    bp = dynamic_cast<Base *> (&b_ob);
    if (bp) {
        cout << "Base * からBase *への型変換成功\n";
        bp->f();
    }
    else
        cout << "失敗\n";
    cout << endl;

    bp = &d_ob;
    dp = dynamic_cast<Derived *> (bp);
    if (dp) {
        cout << "Base * からDerived *への型変換成功\n";
        dp->f();
    }
    else
        cout << "失敗\n";
    cout << endl;

    bp = &b_ob;
    dp = dynamic_cast<Derived *> (bp);
    if (dp)
        cout << "失敗";
    else {
        cout << "bpのDerived *への型変換は失敗\n";
    }
    cout << endl;

    dp = &d_ob;
    bp = dynamic_cast<Base *> (dp);
    if (bp) {
        cout << "dpのBase *への型変換は成功\n";
        bp->f();
    }
    else
        cout << "失敗\n";

    return 0;
}
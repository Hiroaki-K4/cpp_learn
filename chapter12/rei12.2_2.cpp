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
    virtual void f() {}
};

class Derived : public Base {
public:
    void derivedOnly() {
        cout << "Derivedオブジェクト\n";
    }
};

int main()
{
    Base *bp, b_ob;
    Derived *dp, d_ob;
    
    // typeidを使う
    bp = &b_ob;
    if (typeid(*bp) == typeid(Derived)) {
        dp = (Derived *) bp;
        dp->derivedOnly();
    }
    else
        cout << "BaseからDerivedへの型変換失敗\n";

    bp = &d_ob;
    if (typeid(*bp) == typeid(Derived)) {
        dp = (Derived *) bp;
        dp->derivedOnly();
    }
    else
        cout << "失敗、型変換はうまくいった\n";

    // dynamic_castを使う
    bp = &b_ob;
    dp = dynamic_cast<Derived *> (bp);
    if (dp) dp->derivedOnly();
    else
        cout << "BaseからDerivedへの型変換失敗\n";

    bp = &d_ob;
    dp = dynamic_cast<Derived *> (bp);
    if (dp) dp->derivedOnly();
    else
        cout << "失敗、型変換はうまくいった\n";

    return 0;
}
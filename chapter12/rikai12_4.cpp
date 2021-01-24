#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class A {
    virtual void f() {}
};

class B : public A {
};

class C : public B {
};

int main()
{
    A *p, a_ob;
    B b_ob;
    C c_ob;
    int i;

    cout << "0を入力するとAオブジェクト、";
    cout << "1でBオブジェクト、";
    cout << "2でCオブジェクト\n";

    cin >> i;

    if (i == 1) p = &b_ob;
    else if (i == 2) p = &c_ob;
    else p = &a_ob;

    if (typeid(*p) == typeid(A))
        cout << "選択したのはAオブジェクト" << endl;
    else if (typeid(*p) == typeid(B))
        cout << "選択したのはBオブジェクト" << endl;
    else cout << "選択したのはCオブジェクト" << endl;

    return 0;
}
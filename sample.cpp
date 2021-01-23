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
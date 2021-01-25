#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class Demo {
    mutable int i;
    int j;
public:
    int geti() const {
        return i;
    }

    void seti(int x) const {
        i = x;
    }

    void setj(int x) const {
        j = x;
    }
};

int main()
{
    Demo ob;

    ob.seti(1900);
    cout << ob.geti();
    cout << "\n";
    return 0;
}
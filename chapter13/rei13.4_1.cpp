#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class Demo {
    int i;
public:
    int geti() const {
        return i;
    }

    void seti(int x) const {
        i = x;
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
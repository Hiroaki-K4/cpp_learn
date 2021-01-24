#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class pwr {
    int base;
    int exp;
public:
    pwr(int b, int e) { base = b; exp = e; }
    operator int() { return pow(base, exp); }
};

int main()
{
    pwr ob(2, 3);
    int i;

    i = ob;
    cout << "結果: " << i << endl;

    return 0;
}
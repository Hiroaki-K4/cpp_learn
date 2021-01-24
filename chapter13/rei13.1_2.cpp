#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


namespace Demo {
    int a;
}

int x;

namespace Demo {
    int b;
}

int main()
{
    using namespace Demo;

    a = b = x = 100;
    cout << a << " " << b << " " << x << endl;
    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


void f(const double *i)
{
    double *p;
    p = const_cast<double *> (i);
    *p = 100;
}

int main()
{
    double x = 98.6;

    cout << x << endl;
    f(&x);
    cout << x << endl;

    return 0;
}
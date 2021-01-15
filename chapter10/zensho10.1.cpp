#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;

ostream &setsci(ostream &stream)
{
    stream.setf(ios::scientific | ios::uppercase);
    return stream;
}

int main()
{
    double f = 123.23;
    cout << setsci << f << endl;
    return 0;
}
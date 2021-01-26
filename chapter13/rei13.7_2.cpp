#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <strstream>
using namespace std;


int main()
{
    char buf[] = "Hello 100 123.125 a";

    istrstream istr(buf);

    int i;
    char str[80];
    float f;
    char c;

    istr >> str >> i >> f >> c;

    cout << str << ' ' << i << ' ' << f;
    cout << ' ' << c << endl;

    return 0;
}
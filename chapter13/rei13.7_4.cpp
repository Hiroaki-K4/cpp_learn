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
    char iobuf[255];

    strstream iostr(iobuf, sizeof iobuf);

    iostr << "This is a test\n";
    iostr << 100 << hex << ' ' << 100 << endl;

    char str[80];
    int i;

    iostr.getline(str, 79);
    iostr >> dec >> i;

    cout << str << ' ' << i << ' ';

    iostr >> hex >> i;
    cout << hex << i;
    cout << "\n";

    return 0;
}
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
    char c;

    while (!istr.eof()) {
        istr.get(c);
        if (!istr.eof()) cout << c;
    }
    cout << "\n";

    return 0;
}
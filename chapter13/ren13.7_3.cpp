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
    float f;
    char ibuf[] = "123.125";
    istrstream istr(ibuf);
    
    istr >> f;

    cout << f << endl;

    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


ostream &setup(ostream &stream)
{
    stream.width(20);
    stream << "\t\t\t";
    return stream;
}

int main()
{
    cout << setup << "aaa" << endl;
}
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
    char buf[255];

    ostrstream ostr(buf, sizeof buf);

    ostr << "配列ベースの入出力は普通の入出力";
    ostr << "のようにストリームを使える\n" << 100;
    ostr << ' ' << 123.23 << endl;

    ostr << hex << 100 << ' ';

    ostr.setf(ios::scientific);
    ostr << dec << 123.23;
    ostr << endl << ends;

    cout << buf;

    return 0;
}
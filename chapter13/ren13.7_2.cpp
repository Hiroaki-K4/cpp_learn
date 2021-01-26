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
    char ibuf[] = "Hello 100 123.125 a";
    char buf[255];
    istrstream istr(ibuf);
    ostrstream ostr(buf, sizeof buf);

    char ch;
    while (!istr.eof()) {
        istr.get(ch);
        if (!istr.eof()) ostr.put(ch);
    }

    ostr.put('\0');

    cout << "入力: " << ibuf << endl;
    cout << "出力: " << buf << endl;

    return 0;
}
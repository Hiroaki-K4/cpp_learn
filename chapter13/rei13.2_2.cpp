#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class strtype {
    char str[80];
    int len;
public:
    strtype(char *s) { strcpy(str, s); len = strlen(s); }
    operator char *() { return str; }
};

int main()
{
    strtype s("This is a Test\n");
    char *p, s2[80];

    p = s;
    cout << "ここに文字列が入る: " << p << endl;

    strcpy(s2, s);
    cout << "ここに文字列のコピーが入る: " << s2 << endl;

    return 0;
}
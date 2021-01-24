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
    operator int() { return len; }
};

int main()
{
    strtype s("This is a Test\n");
    int i;

    i = s;
    cout << "文字数: " << i << endl;

    return 0;
}
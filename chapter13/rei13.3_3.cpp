#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class output {
    static char outbuf[255];
    static int inuse;
    static int oindex;
    char str[80];
    int i;
    int who;
public:
    output(int w, char *s) { strcpy(str, s); i = 0; who = w; }
    int putbuf()
    {
        if (!str[i]) {
            inuse = 0;
            return 0;
        }
        if (!inuse) inuse = who;
        if (inuse != who) return -1;
        if (str[i]) {
            outbuf[oindex] = str[i];
            i++; oindex++;
            outbuf[oindex] = '\0';
            return 1;
        }
        return 0;
    }
    void show() { cout << outbuf << endl; }
};

char output::outbuf[255];
int output::inuse = 0;
int output::oindex = 0;

int main()
{
    output o1(1, "This is a test"), o2(2, " of statics");
    while (o1.putbuf() | o2.putbuf()) ;
    o1.show();

    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class coord {
    int x, y;
public:
    coord(int i, int j) { x = i; y = j; }
    operator int() { return x*y; }
};

int main()
{
    coord o1(2, 3), o2(4, 3);
    int i;

    i = o1;
    cout << i << endl;

    i = 100 + o2;
    cout << i << endl;

    return 0;
}
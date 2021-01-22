#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


template <class X>
class coord {
    X x, y;
public:
    coord(X i, X j) { x = i; y = j; }
    void show() {cout << x << ' ' << y << endl; }
};

int main()
{
    coord<int> o1(1, 2), o2(3, 4);
    o1.show();
    o2.show();

    coord<double> o3(1.5, 2.5), o4(3.5, 4.5);
    o3.show();
    o4.show(); 

    return 0;
}
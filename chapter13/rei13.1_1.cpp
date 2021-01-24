#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


namespace firstNS {
    class demo {
        int i;
    public:
        demo(int x) { i = x; }
        void seti(int x) { i = x; }
        int geti() { return i; }
    };
    char str[] = "名前空間を説明する\n";
    int counter;
}

namespace secondNS {
    int x, y;
}

int main()
{
    firstNS::demo ob(10);

    cout << "obの値は : " << ob.geti() << endl;

    ob.seti(99);

    cout << "obの値は今 : " << ob.geti() << endl;

    using firstNS::str;
    cout << str;

    using namespace firstNS;
    for (counter = 10; counter; counter--)
        cout << counter << " ";
    cout << endl;

    secondNS::x = 10;
    secondNS::y = 20;

    cout << "x, y: " << secondNS::x;
    cout << ", " << secondNS::y << endl;

    using namespace secondNS;
    demo xob(x), yob(y);

    cout << "xob, yob: " << xob.geti() << ", ";
    cout << yob.geti() << endl;

    return 0;
}
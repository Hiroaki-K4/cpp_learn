#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class CountDown {
    int incr;
    int target;
    mutable int current;
public:
    CountDown(int delay, int i = 1) {
        target = delay;
        incr = i;
        current = 0;
    }

    bool counting() const {
        current += incr;

        if (current >= target) {
            cout << "\a";
            return false;
        }
        cout << current << " ";

        return true;
    }
};

int main()
{
    CountDown ob(1000, 20);
    while (ob.counting());
    cout << "\n";
    return 0;
}
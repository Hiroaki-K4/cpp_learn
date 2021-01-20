#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


double devide(double a, double b)
{
    try {
        if (b == 0) throw -1;
    }
    catch (int i)
    {
        cout << "0では割り切れないよ" << endl;
        exit(1);
    }
    return a / b;
}

int main()
{
    double ans1;
    double ans2;

    ans1 = devide(4.0, 2.0);
    cout << ans1 << endl;
    ans2 = devide(4.0, 0);
    cout << ans2 << endl;
    return 0;
}
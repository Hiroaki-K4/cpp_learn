#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


template <class X>
X gexp(X a, X b)
{
    int count;
    X ans;

    ans = a;
    count = 1;
    while (count < b) {
        ans *= a;
        count++;
    }
    return ans;
}

int main()
{
    int a = 2;
    int b = 3;
    cout << gexp(a, b) << endl;

    double c = 2.0;
    double d = 3.0;
    cout << gexp(c, d) << endl;

    return 0;
}
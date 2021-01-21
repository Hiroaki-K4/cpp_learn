#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


template <class X>
X array_total(X *data, int size)
{
    int j;
    X ans;

    ans = 0;
    for (j = 0; j < size; j++) {
        ans += data[j];
    }
    return ans;
}

int main()
{
    int i[] = { 1, 2, 3, 4, 2, 3, 2, 2, 1, 5 };
    double p[] = {2.0, 3.0, 5.4};
    cout << "iの総計: " << array_total(i, 10) << endl;
    cout << "pの総計: " << array_total(p, 3) << endl;
    return 0;
}
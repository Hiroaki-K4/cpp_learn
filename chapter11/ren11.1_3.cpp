#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


template <class X> X find(X object, X *list, X size)
{
    int i;

    for (i = 0; i < size; i++) {
        if (list[i] == object) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int list[10];

    list[0] = 3;
    list[1] = 2;
    list[2] = 5;
    cout << find(3, list, 3) << endl;
    return 0;
}
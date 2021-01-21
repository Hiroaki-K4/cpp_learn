#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


template <class X>
X *bubble(X *data, int size)
{
    int a;
    int b;
    X temp;

    for (a = 0; a < size; a++) {
        for (b = size - 1; b > a; b--) {
            if (data[b - 1] > data[b]) {
                temp = data[b];
                data[b] = data[b - 1];
                data[b - 1] = temp;
            }
        }
    }
    return data;
}

int main()
{
    int i[] = { 1, 2, 3, 4, 2, 3, 2, 2, 1, 5 };
    double p[] = {5.4, 2.0, 3.0};
    int j;

    for (j = 0; j < 10; j++) cout << "iのソート: " << bubble(i, 10)[j] << endl;
    for (j = 0; j < 3; j++) cout << "pのソート: " << bubble(p, 3)[j] << endl;
    return 0;
}
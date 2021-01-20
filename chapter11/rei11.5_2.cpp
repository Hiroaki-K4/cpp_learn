#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
    double *p;

    do {
        try {
            p = new double[100000];
        } catch (bad_alloc xa) {
            cout << "メモリ割り当て失敗\n";
            return 1;
        }
        cout << "メモリ割り当て成功\n";
    } while (p);

    return 0;
}
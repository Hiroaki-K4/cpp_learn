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
        p = new(nothrow) double[100000];
        if (p) cout << "メモリ割り当て成功\n";
        else cout << "メモリ割り当て失敗\n";
    } while (p);

    return 0;
}
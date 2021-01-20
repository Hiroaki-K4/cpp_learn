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
    int *p;
    try {
        p = new int;
    } catch (bad_alloc xa) {
        cout << "メモリ割り当て失敗" << endl;
        return 1;
    }

    for (*p = 0; *p < 10; (*p)++)
        cout << *p << " ";
    cout << "\n";

    delete p;
    return 0;
}
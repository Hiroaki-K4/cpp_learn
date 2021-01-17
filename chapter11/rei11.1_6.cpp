#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


template <class X> void swapargs(X &a, X &b)
{
    X temp;

    temp = a;
    a = b;
    b = temp;
}

void swapargs(int a, int b)
{
    cout << "swapargs(int, int)の内部です\n";
}

int main()
{
    int i = 10, j = 20;
    float x = 10.1, y = 23.3;

    cout << "オリジナル i, j: " << i << ' ' << j << endl;
    cout << "オリジナル x, y: " << x << ' ' << y << endl;

    swapargs(i, j);
    swapargs(x, y);

    cout << "入れ替え後 i, j: " << i << ' ' << j << endl;
    cout << "入れ替え後 x, y: " << x << ' ' << y << endl;
    return 0;
}
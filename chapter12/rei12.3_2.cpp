#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


void f(const int *p)
{
    int *v;

    v = const_cast<int *> (p);
    *v = 100;
}

int main()
{
    int x = 99;

    cout << "呼び出し前のx: " << x << endl;
    f(&x);
    cout << "呼び出し後のx: " << x << endl;
    
    return 0; 
}
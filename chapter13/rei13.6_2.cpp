#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


extern "C" int func(int x) {
    void f1();
    int f2(int x);
    double f3(double x, int *p);
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


extern "C" int func(int x);

int func(int x)
{
    return x / 3;
}
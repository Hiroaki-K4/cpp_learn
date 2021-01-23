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
    int i;
    float f;

    f = 199.22;
    i = static_cast<int> (f);

    cout << i << endl;

    return 0;
}
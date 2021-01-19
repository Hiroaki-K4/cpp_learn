#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


void Xhandler(int test)
{
    try {
        if (test == 0) throw test;
        if (test == 1) throw 'a';
        if (test == 2) throw 123;
    }

    catch(...) {
        cout << "捕獲!" << endl;
    }
}

int main()
{
    cout << "開始\n";

    Xhandler(0);
    Xhandler(1);
    Xhandler(2);

    cout << "終了" << endl;
    return 0;
}
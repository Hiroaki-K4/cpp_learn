#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


void Xtest(int test)
{
    cout << "Xtestの内部。testは: " << test << endl;
    if (test) throw test;
}


int main()
{
    cout << "開始\n";

    try {
        cout << "tryブロックの内部\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }

    catch (int i) {
        cout << "捕獲! 数字は: ";
        cout << i << endl;
    }

    cout << "終了" << endl;
    return 0;
}
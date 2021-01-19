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
    cout << "開始\n";

    try {
        cout << "tryブロックの内部\n";
        throw 10;
        cout << "ここは実行されないはず";
    }

    catch (int i) {
        cout << "捕獲! 数字は: ";
        cout << i << endl;
    }

    cout << "終了" << endl;
    return 0;
}
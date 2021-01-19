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
        if (test) throw test;
        else throw "値は0";
    }
    catch (int i) {
        cout << "捕獲! Ex. #: " << i << endl;
    }
    catch (char const *str) {
        cout << "文字列を捕獲: ";
        cout << str << endl;
    }
}

int main()
{
    cout << "開始\n";

    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);

    cout << "終了" << endl;
    return 0;
}
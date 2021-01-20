#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


void Xhandler()
{
    try {
        throw "hello";
    }
    catch (char const *) {
        cout << "Xhandlerのchar*を捕獲\n";
        throw ;
    }
}

int main()
{
    cout << "開始\n";

    try {
        Xhandler();
    }
    catch (char const *) {
        cout << "mainのchar *を捕獲\n";
    }
    
    cout << "終了" << endl;
    return 0;
}
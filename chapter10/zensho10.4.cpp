#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int main(int argc, char *argv[])
{
    if (argc != 2) {
        cout << "使い方: <出力ファイル>\n";
        return 1;
    }

    ofstream out(argv[1]);

    if (!out) {
        cout << "出力ファイルが開けません\n";
        return 1;
    }
    
    char ch;
    cin >> ch;
    out.seekp(233, ios::beg);
    out.put(ch);
    out.close();
    return 0;
}
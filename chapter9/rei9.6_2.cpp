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
    char ch;

    if (argc != 2) {
        cout << "使い方: DISPLAY <ファイル名>\n";
        return 1;
    }

    ifstream in(argv[1]);

    if (!in) {
        cout << "入力ファイルが開けません\n";
        return 1;
    }

    while (!in.eof()) {
        in.get(ch);
        if (!in.good() && !in.eof()) {
            cout << "入出力エラー\n";
            return 1;
        }
        cout << ch;
    }

    in.close();
    return 0;
}

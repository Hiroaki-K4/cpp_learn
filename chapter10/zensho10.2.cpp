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
    if (argc != 3) {
        cout << "使い方: <入力ファイル> <出力ファイル>\n";
        return 1;
    }

    ifstream in(argv[1], ios::in | ios::binary);

    if (!in) {
        cout << "入力ファイルが開けません\n";
        return 1;
    }

    ofstream out(argv[2], ios::out | ios::binary);

    if (!out) {
        cout << "出力ファイルが開けません\n";
        return 1;
    }

    int i;
    char ch;
    while (!in.eof()) {
        in.get(ch);
        if (ch == '\t') {
            for (i = 0; i < 4; i++) {
                out.put(' ');
            }
        }
        else out.put(ch);
    }
    in.close();
    out.close();
    return 0;
}
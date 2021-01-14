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
        cout << "使い方: <入力ファイル名> <出力ファイル名>\n";
        return 1;
    }

    ifstream in(argv[1], ios::in | ios::binary);
    if (!in) {
        cout << "入力ファイルが開けません\n";
        return 1;
    }

    ofstream out(argv[2], ios::in | ios::binary);
    if (!out) {
        cout << "出力ファイルが開けません\n";
        return 1;
    }

    char ch;
    while (!in.eof()) {
        in.get(ch);
        if (!in.eof()) {
            if (islower(ch)) ch = toupper(ch);
            else ch = tolower(ch);
        } 
        out.put(ch);
    }
    return 1;
}

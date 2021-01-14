#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int alpha[26];

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cout << "使い方: <入力ファイル名>\n";
        return 1;
    }

    ifstream in(argv[1], ios::in | ios::binary);
    if (!in) {
        cout << "入力ファイルが開けません\n";
        return 1;
    }

    int i;
    for (i = 0; i < 26; i++) {
        alpha[i] = 0;
    }

    char ch;
    while (!in.eof()) {
        in.get(ch);
        if (!in.good() && !in.eof()) return 1;
        if (isalpha(ch)) {
            ch = toupper(ch);
            alpha[ch - 'A']++;
        }
    }
    for (i = 0; i < 26; i++) {
        cout << (char) ('A' + i) << ' ' << alpha[i] << endl;
    }
    return 0;
}

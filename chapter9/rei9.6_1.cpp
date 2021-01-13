#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


void checkstatus(ifstream &in);

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cout << "使い方: DISPLAY <ファイル名>\n";
        return 1;
    }

    ifstream in(argv[1]);

    if (!in) {
        cout << "入力ファイルが開けません\n";
        return 1;
    }

    char c;
    while (in.get(c)) {
        cout << c;
        checkstatus(in);
    }

    checkstatus(in);
    in.close();
    return 0;
}

void checkstatus(ifstream &in)
{
    ios::iostate i;
    i = in.rdstate();

    if (i & ios::eofbit)
        cout << "EOFが見つかりました\n";
    else if (i & ios::failbit)
        cout << "致命的ではない入出力エラー\n";
    else if (i & ios::badbit)
        cout << "致命的な入出力エラー\n";
}
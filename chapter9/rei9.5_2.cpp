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

    if (argc != 3) {
        cout << "使い方: LOCATE <ファイル名> <位置>\n";
        return 1;
    }

    ifstream in(argv[1], ios::in | ios::binary);

    if (!in) {
        cout << "入力ファイルが開けません\n";
        return 1;
    }

    in.seekg(atoi(argv[2]), ios::beg);

    while (!in.eof()) {
        in.get(ch);
        cout << ch;
    }
    in.close();
    return 1;
}
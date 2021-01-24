#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>


int main(int argc, char *argv[])
{
    if (argc != 3) {
        std::cout << "使い方: CONVERT <入力ファイル> <出力ファイル>\n";
        return 1;
    }

    std::ifstream fin(argv[1]);
    std::ofstream fout(argv[2]);

    if (!fout) {
        std::cout << "出力ファイルが開けません\n";
        return 1;
    }

    if (!fin) {
        std::cout << "入力ファイルが開けません\n";
        return 1;
    }

    char ch;
    fin.unsetf(std::ios::skipws);
    while (!fin.eof()) {
        fin >> ch;
        if (ch == ' ') ch = '|';
        if (!fin.eof()) fout << ch;
    }

    fin.close();
    fout.close();

    return 0;
}
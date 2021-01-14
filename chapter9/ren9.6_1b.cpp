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
        cout << "使い方: LOCATE <ファイル名>\n";
        return 1;
    }

    fstream out(argv[1], ios::in | ios::out | ios::binary);

    if (!out) {
        cout << "ファイルが開けません\n";
        return 1;
    }

    char ch1, ch2;
    long i;

    for (i = 0; !out.eof(); i+=2) {
        out.seekg(i, ios::beg);
        if (!out.good()) return 1;
        out.get(ch1);
        if (!out.good()) return 1;
        if (out.eof()) continue;
        out.get(ch2);
        if (!out.good()) return 1;
        if (out.eof()) continue;
        out.seekg(i, ios::beg);
        if (!out.good()) return 1;
        out.put(ch2);
        if (!out.good()) return 1;
        out.put(ch1);
        if (!out.good()) return 1;
    }
    out.close();
    return 0;
}
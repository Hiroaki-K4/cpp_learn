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
        cout << "使い方: <入力ファイル> <単語>\n";
        return 1;
    }

    ifstream in(argv[1]);

    if (!in) {
        cout << "入力ファイルが開けません\n";
        return 1;
    }

    char ch[80];
    int count = 0;
    while (!in.eof()) {
        in >> ch;
        if (!strcmp(ch, argv[2])) count++;
    }
    in.close();
    cout << count << endl;
    return 0;
}
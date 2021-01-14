#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


ostream &atn(ostream &stream)
{
    stream << "警告: ";
    return stream;
}

ostream &note(ostream &stream)
{
    stream << "注意: ";
    return stream;
}

int main()
{
    ofstream out("test");

    if (!out) {
        cout << "出力ファイルが開けません\n";
        return 1;
    }

    cout << atn << "高圧回路\n";
    cout << note << "消灯\n";

    out << atn << "高圧回路\n";
    out << note << "消灯\n";
    out.close();

    return 0;
}
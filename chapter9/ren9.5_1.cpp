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

    ifstream in(argv[1], ios::in | ios::binary);

    if (!in) {
        cout << "入力ファイルが開けません\n";
        return 1;
    }

    in.seekg(0, ios::end);

	char ch;
	long i;
	i = (long) in.tellg();
	i -= 2;

    for ( ; i >= 0; i--) {
		in.seekg(i, ios::beg);
		in.get(ch);
		cout << ch;
	}
    in.close();
    return 1;
}
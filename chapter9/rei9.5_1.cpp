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
	if (argc != 4) {
		cout << "使い方: CHANGE <ファイル名> <バイト> <文字>\n";
		return 1;
	}

	fstream out(argv[1], ios::in | ios::out | ios::binary);

	if (!out) {
		cout << "ファイルが開けません\n";
		return 1;
	}

	out.seekp(atoi(argv[2]), ios::beg);
	out.put(*argv[3]);
	out.close();
	return 0;
}
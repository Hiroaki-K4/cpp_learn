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
		cout << "使い方: CONVERT <入力ファイル名> <出力ファイル名>\n";
		return 1;
	}
	ifstream fin(argv[1]);
	ofstream fout(argv[2]);

	if (!fout) {
		cout << "出力ファイルが開けません\n";
		return 1;
	}
	if (!fin) {
		cout << "入力ファイルが開けません\n";
		return 1;
	}

	char ch;

	fin.unsetf(ios::skipws);
	while (!fin.eof()) {
		fin >> ch;
		if (ch == ' ') ch = '|';
		if (!fin.eof()) fout << ch;
	}
	fin.close();
	fout.close();
	return 0;
}
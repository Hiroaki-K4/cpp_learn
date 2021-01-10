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

	if (argc != 2) {
		cout << "使い方: PR <ファイル名>\n";
		return 1;
	}

	ifstream in(argv[1], ios::in | ios::binary);
	if (!in) {
		cout << "ファイルが開けません\n";
		return 1;
	}
	while (!in.eof()) {
		in.get(ch);
		cout << ch;
	}
	in.close();
	return 0;
}
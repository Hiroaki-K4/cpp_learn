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

	ofstream out(argv[1], ios::out | ios::binary);
	if (!out) {
		cout << "ファイルが開けません\n";
		return 1;
	}
	cout << "$で入力を終了します\n";
	do {
		cin.get(ch);
		out.put(ch);
	} while (ch != '$');
	out.close();
	return 0;
}
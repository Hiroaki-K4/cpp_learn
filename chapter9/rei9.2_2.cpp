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
		cout << "使い方: WRITE <ファイル名>\n";
		return 1;
	}
	ofstream out(argv[1]);

	if (!out) {
		cout << "出力ファイルが開けません\n";
		return 1;
	}

	char str[80];
	cout << "文字列をディスクに書き込み、$で停止します\n";

	do {
		cout << ": ";
		cin >> str;
		out << str << endl;
	} while (*str != '$');

	out.close();
	return 0;
}
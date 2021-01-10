#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;



int main()
{
	ofstream fout("test");

	if (!fout) {
		cout << "出力ファイルが開けません" << endl;
		return 1;
	}

	fout << "Hello!\n";
	fout << 100 << ' ' << hex << 100 << endl;

	fout.close();
	ifstream fin("test");

	if (!fin) {
		cout << "入力ファイルが開けません\n";
		return 1;
	}

	char str[80];
	int i;
	int j;

	fin >> str >> i >> j;
	cout << str << ' ' << i << ' ' << j << endl;
	fin.close();
	return 0;
}
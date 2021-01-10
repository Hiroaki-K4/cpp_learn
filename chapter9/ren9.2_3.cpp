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
	ifstream fin(argv[1]);
	if (!fin) {
		cout << "入力ファイルが開けません\n";
		return 1;
	}

	char ch;
	int count;
	count = 0;
	fin.unsetf(ios::skipws);
	while (!fin.eof()) {
		fin >> ch;
		if (isspace(ch)) {
			count++;
			while (isspace(ch) && !fin.eof()) fin >> ch;
		}
	}
	fin.close();
	cout << count << endl;
	return 0;
}
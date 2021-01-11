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
	ifstream in("test", ios::in | ios::binary);

	if (!in) {
		cout << "入力ファイルが開けません\n";
		return 1;
	}

	double num;
	char str[80];

	in.read((char *) &num, sizeof(double));
	in.read(str, 14);
	str[14] = '\0';
	cout << num << ' ' << str << "\n";
	in.close();
	return 0;
}
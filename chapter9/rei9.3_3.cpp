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
	ofstream out("test", ios::out | ios::binary);

	if (!out) {
		cout << "出力ファイルが開けません\n";
		return 1;
	}

	double num = 100.45;
	char str[] = "This is a test";

	out.write((char *) &num, sizeof(double));
	out.write(str, strlen(str));
	out.close();
	return 0;
}
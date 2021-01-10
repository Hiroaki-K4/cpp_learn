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
	ofstream fout("tensai");
	if (!fout) {
		cout << "ファイルが開けません\n";
		return 1;
	}
	fout << "Issac Newton, 415 555-3423\n";
	fout << "Robert Goddard, 213 555-2312\n";
	fout << "Enrico Fermi, 202 555-1111\n";
	fout.close();
	return 0;
}
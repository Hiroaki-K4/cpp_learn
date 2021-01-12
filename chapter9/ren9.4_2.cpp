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
	char str[80];

	ifstream fin("tensai", ios::in | ios::binary);
	while (!fin.eof()) {
		fin.getline(str, 79);
		cout << str << endl;
	}
	fin.close();
	return 0;
}
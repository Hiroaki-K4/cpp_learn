　#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


istream &skipchar(istream &stream)
{
	int i;
	char c;

	for (i = 0; i < 10; i++) stream >> c;
	return stream;
}

int main()
{
	char str[80];
	cin >> skipchar >> str;
	cout << str << endl;
}
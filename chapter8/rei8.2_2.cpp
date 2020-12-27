#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	cout.unsetf(ios::dec);
	cout.setf(ios::uppercase | ios::showbase | ios::hex);

	cout << 88 << endl;
	cout.unsetf(ios::uppercase);
	cout << 88 << endl;
	return 0;
}
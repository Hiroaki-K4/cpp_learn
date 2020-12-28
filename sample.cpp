#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	int x;

	cout.precision(4);
	cout << "      x   loge(x)    log10(x)" << endl;

	for (x = 2; x <= 100; x++) {
		cout.width(10);
		cout.precision(5);
		cout << x << "  ";
		cout.width(10);
		cout.precision(5);
		cout << sqrt(x) << "  ";
		cout.width(10);
		cout.precision(5);
		cout << x*x << endl;
	}
	return 0;
}
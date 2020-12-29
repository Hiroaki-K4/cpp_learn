#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	double x;

	cout << setprecision(4);
	cout << "      x  sqrt(x)     x**2" << endl;

	for (x = 2.0; x <= 20.0; x++) {
		cout << setw(7) << x << "  ";
		cout << setw(7) << sqrt(x) << "  ";
		cout << setw(7) << x*x << endl;
	}
	return 0;
}
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;

// 例の方やってる
int main()
{
	cout << setw(10) << "hello" << endl;
	cout << setfill('%') << setw(10) << "hello" << endl;
	cout << left << setw(10) << "hello" << endl;

	cout << setw(10) << setprecision(10) << 123.234567 << endl;
	cout << setw(10) << setprecision(6) << 123.234567 << endl;
	return 0;
}
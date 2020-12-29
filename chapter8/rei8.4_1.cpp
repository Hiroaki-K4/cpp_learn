#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	cout << hex << 100 << endl;
	cout << oct << 10 << endl;

	cout << setfill('x') << setw(10);
	cout << 100 << " hi " << endl;
	return 0;
}
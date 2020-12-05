#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


void order(int &x, int &y)
{
	int tmp;

	if (x > y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}
}

int main()
{
	int a = 2;
	int b = 3;
	order(a, b);
	cout << a << endl;
	cout << b << endl;
	return 0;
}
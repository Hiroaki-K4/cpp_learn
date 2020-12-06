#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class coord {
	int x, y;
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int &i, int &j) { i = x; j = y; }
	coord operator--();
	coord operator--(int notused);
};

coord coord::operator--()
{
	x--;
	y--;

	return *this;
}

coord coord::operator--(int notused)
{
	x--;
	y--;

	return *this;
}

int main()
{
	coord o1(10, 10), o2(5, 7);
	int x, y;

	--o1;
	o1.get_xy(x, y);
	cout << "(--o1) X: " << x << ", Y: " << y << endl;

	o2--;
	o2.get_xy(x, y);
	cout << "(o1--) X: " << x << ", Y: " << y << endl;
	return 0;
}
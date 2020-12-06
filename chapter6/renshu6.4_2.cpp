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
	coord operator+();
	coord operator+(coord ob2);
};

coord coord::operator+()
{
	if (x < 0)
		x = (-1) * x;
	if (y < 0)
		y = (-1) * y;

	return *this;
}

coord coord::operator+(coord ob2)
{
	coord temp;

	temp.x = x + ob2.x;
	temp.y = y + ob2.y; 

	return temp;
}

int main()
{
	coord o1(10, 10), o2(-5, 7), o3;
	int x, y;

	+o2; 
	o2.get_xy(x, y);
	cout << "(+o2) X: " << x << ", Y: " << y << endl;

	o3 = o1 + o2;
	o3.get_xy(x, y);
	cout << "(o3) X: " << x << ", Y: " << y << endl;
	return 0;
}
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
	coord operator<<(int i);
	coord operator>>(int i);
};

coord coord::operator<<(int i)
{
	coord temp;

	temp.x = x << i;
	temp.y = y << i;

	return temp;
}

coord coord::operator>>(int i)
{
	coord temp;

	temp.x = x >> i;
	temp.y = y >> i;

	return temp;
}

int main()
{
	coord o1(4, 4), o2;
	int x, y;

	o2 = o1 << 2;
	o2.get_xy(x, y);
	cout << "(o1<<o2) X: " << x << ", Y: " << y << endl;

	o2 = o1 >> 2;
	o2.get_xy(x, y);
	cout << "(o1>>o2) X: " << x << ", Y: " << y << endl;

	return 0;
}
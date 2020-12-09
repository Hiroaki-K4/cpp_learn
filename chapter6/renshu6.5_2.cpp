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
	friend coord operator*(coord ob, int i);
	friend coord operator*(int i, coord ob);
};

coord operator*(coord ob, int i)
{
	coord temp;

	temp.x = ob.x * i;
	temp.y = ob.y * i;

	return temp;
}

coord operator*(int i, coord ob)
{
	coord temp;

	temp.x = ob.x * i;
	temp.y = ob.y * i;

	return temp;
}

int main()
{
	coord o1(10, 10), o3;
	int x, y;
	int i = 3;

	o3 = o1 * i;
	o3.get_xy(x, y);
	cout << "(o1 * i) X: " << x << ", Y: " << y << endl;
	
	o3 = i * o1;
	o3.get_xy(x, y);
	cout << "(i * o1) X: " << x << ", Y: " << y << endl;
	return 0;
}
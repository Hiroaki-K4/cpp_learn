#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class coord {
public:
	int x, y;
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int &i, int &j) { i = x; j = y; }
	friend coord operator+(coord ob1, coord ob2);
	friend coord operator-(coord ob1, coord ob2);
	coord operator=(coord ob2);
};

coord operator+(coord ob1, coord ob2)
{
	coord temp;

	cout << "coord operator+()を使用" << endl;
	temp.x = ob1.x + ob2.x;
	temp.y = ob1.y + ob2.y;
	return temp;
}

coord operator-(coord ob1, coord ob2)
{
	coord temp;

	cout << "coord operator-()を使用" << endl;
	temp.x = ob1.x - ob2.x;
	temp.y = ob1.y - ob2.y;
	return temp;
}

coord coord::operator=(coord ob2)
{
	cout << "coord operator=()を使用" << endl;

	coord temp;
	temp.x = ob2.x;
	temp.y = ob2.y;
	return temp;
}

class quad : public coord {
	int quadrant;
public:
	quad() { x = 0; y = 0; quadrant = 0; }
	quad(int x, int y) : coord(x, y)
	{
		if (x >= 0 && y >= 0) quadrant = 1;
		else if (x < 0 && y >= 0) quadrant = 2;
		else if (x < 0 && y < 0) quadrant = 3;
		else quadrant = 4;
	}
	void showq()
	{
		cout << "象限を示す: " << quadrant << endl;
	}
	quad operator=(coord ob2);
};

quad quad::operator=(coord ob2)
{
	cout << "quad operator=()を使用" << endl;

	x = ob2.x;
	y = ob2.y;

	if (x >= 0 && y >= 0) quadrant = 1;
	else if (x < 0 && y >= 0) quadrant = 2;
	else if (x < 0 && y < 0) quadrant = 3;
	else quadrant = 4;
	return *this;
}

int main()
{
	quad o1(10, 10), o2(15, 3), o3;
	int x, y;

	o3 = o1 + o2;
	o3.get_xy(x, y);
	o3.showq();
	cout << "(o1 + o2) X: " << x << ", Y: " << y << endl;

	o3 = o1 - o2;
	o3.get_xy(x, y);
	o3.showq();
	cout << "(o1 - o2) X: " << x << ", Y: " << y << endl;

	o3 = o1;
	o3.get_xy(x, y);
	o3.showq();
	cout << "(o3 = o1) X: " << x << ", Y: " << y << endl;

	return 0;
}
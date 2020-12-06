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
	int operator==(coord ob2);
	int operator&&(coord ob2);
};

int coord::operator==(coord ob2)
{
	return x == ob2.x && y == ob2.y;
}

int coord::operator&&(coord ob2)
{
	return (x && ob2.x) && (y && ob2.y);
}

int main()
{
	coord o1(10, 10), o2(5, 3), o3(10, 10), o4(0, 0);
	if (o1 == o2) cout << "o1 == o2" << endl;
	else cout << "o1 != o2" << endl;

	if (o1 == o3) cout << "o1 == o3" << endl;
	else cout << "o1 != o3" << endl;

	if (o1 && o2) cout << "o1 && o2 == 1" << endl;
	else cout << "o1 && o2 == 0" << endl;

	if (o1 && o4) cout << "o1 && o4 == 1" << endl;
	else cout << "o1 && o4 == 0" << endl;

	return 0;
}
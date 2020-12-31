#include <iostream>
#include <iomanip>
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
	friend ostream &operator<<(ostream &stream, coord ob);
};

ostream &operator<<(ostream &stream, coord ob)
{
	stream << ob.x << ", " << ob.y << endl;
	return stream;
}

int main()
{
	coord a(1, 1), b(10, 23);
	cout << a << b;
	return 0;
}
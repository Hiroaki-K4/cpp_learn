#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class three_d {
	int x, y, z;
public:
	three_d(int i, int j, int k)
	{
		x = i; y = j; z = k;
	}
	three_d() { x = 0; y = 0; z = 0; }
	void get(int &i, int &j, int &k)
	{
		i = x; j = y; k = z;
	}
	three_d operator+(three_d ob);
	three_d operator+(int i);
};

three_d three_d::operator+(three_d ob)
{
	three_d temp;

	temp.x = x + ob.x;
	temp.y = y + ob.y;
	temp.z = z + ob.z;

	return temp;
}

three_d three_d::operator+(int i)
{
	three_d temp;

	temp.x = x + i;
	temp.y = y + i;
	temp.z = z + i;

	return temp;
}



int main()
{
	three_d o1(10, 10, 10), o2(1, 1, 1), o3;
	int a, b, c;

	o3 = o1 + o2;
	o3.get(a, b, c);
	cout << "(o1 + o2) X: " << a << " Y: " << b << " Z: " << c << endl;
	
	return 0;
}
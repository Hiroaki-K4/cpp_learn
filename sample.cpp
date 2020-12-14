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
	int operator==(three_d ob);
	int operator!=(three_d ob);
	int operator||(three_d ob);
};

int three_d::operator==(three_d ob)
{
	return x == ob.x && y == ob.y && z == ob.z;
}

int three_d::operator!=(three_d ob)
{
	return x != ob.x || y == ob.y || z == ob.z;
}

int three_d::operator||(three_d ob)
{
	return (x || ob.x) && (y || ob.y) && (z || ob.z);
}

int main()
{
	three_d o1(10, 10, 10), o2(1, 1, 1), o3;
	int a, b, c;

	if (o1 == o2) cout << "yes" << endl;
	else cout << "no" << endl;
	
	if (o1 != o2) cout << "yes" << endl;
	else cout << "no" << endl;

	if (o1 || o2) cout << "yes" << endl;
	else cout << "no" << endl;

	return 0;
}
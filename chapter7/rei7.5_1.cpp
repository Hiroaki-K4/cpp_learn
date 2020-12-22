#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class base {
public:
	int i;
};

class derived1 : virtual public base {
public:
	int j;
};

class derived2 : virtual public base {
public:
	int k;
};

class derived3 : public derived1, public derived2 {
public:
	int product() { return i * j * k; }
};

int main()
{
	derived3 ob;

	ob.i = 10;
	ob.j = 3;
	ob.k = 5;

	cout << "積は " << ob.product() << endl;
	return 0;
}
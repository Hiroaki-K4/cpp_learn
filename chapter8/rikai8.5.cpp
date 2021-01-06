#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class pwr {
	int base;
	int exponent;
	double result;
public:
	pwr(int b, int e);
	friend ostream &operator<<(ostream &stream, pwr ob);
	friend istream &operator>>(istream &stream, pwr &ob);
};

pwr::pwr(int b, int e)
{
	base = b;
	exponent = e;

	result = 1;
	for ( ; e; e--) result = result * base;
}

ostream &operator<<(ostream &stream, pwr ob)
{
	stream << ob.result << endl;
	return stream;
}

istream &operator>>(istream &stream, pwr &ob)
{
	stream >> ob.base >> ob.exponent;
	pwr temp(ob.base, ob.exponent);
	ob = temp;
	return stream;
}

int main()
{
	pwr ob1(10, 2);
	cout << ob1;
	cin >> ob1;
	cout << ob1;
	return 0;
}
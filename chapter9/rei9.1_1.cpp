#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;



ostream &setup(ostream &stream)
{
	stream.width(10);
	stream.precision(4);
	stream.fill('*');

	return stream;
}

int main()
{
	cout << setup << 123.123456 << endl;
	return 0;
}
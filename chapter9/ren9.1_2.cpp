#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


ostream &sethex(ostream &stream)
{
	stream.unsetf(ios::dec | ios::oct);
	stream.setf(ios::hex | ios::uppercase | ios::showbase);
	return stream;
}

ostream &reset(ostream &stream)
{
	stream.unsetf(ios::hex | ios::uppercase | ios::showbase);
	return stream;
}

int main()
{
	cout << sethex << 16 << " " << reset << 16 << endl;
}
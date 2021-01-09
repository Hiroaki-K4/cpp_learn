#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


ostream &td(ostream &stream)
{
	time_t t = time(NULL);
	stream << asctime(localtime(&t));
	return stream;
}

int main()
{
	cout << td;
	return 0;
}
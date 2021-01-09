#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;



class date {
	char d[9];
public:
	friend ostream &operator<<(ostream &stream, date ob);
	friend istream &operator>>(istream &stream, date &ob);
};

ostream &operator<<(ostream &stream, date ob)
{
	stream << ob.d << endl;
	return stream;
}

istream &operator>>(istream &stream, date &ob)
{
	stream >> ob.d;
	return stream;
}

int main()
{
	date ob1;
	cin >> ob1;
	cout << ob1;
	return 0;
}
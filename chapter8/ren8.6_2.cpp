#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class digit {
	int seisu;
	int insu;
public:
	digit(int a);
	friend ostream &operator<<(ostream &stream, digit ob);
	friend istream &operator>>(istream &stream, digit &ob);
};

digit::digit(int a)
{
	int i;

	seisu = a;
	for (i = 2; i <= a; i++)
	{
		if (seisu % i == 0)
		{
			insu = i;
			break;
		}
	}
}

ostream &operator<<(ostream &stream, digit ob)
{
	stream << ob.seisu << " " << ob.insu << endl;
	return stream;
}

istream &operator>>(istream &stream, digit &ob)
{
	stream >> ob.seisu;
	int i;

	for (i = 2; i <= ob.seisu; i++)
	{
		if (ob.seisu % i == 0)
		{
			ob.insu = i;
			break;
		}
	}
	return stream;
}

int main()
{
	digit ob1(11);
	cout << ob1;
	cout << "数値を入力: ";
	cin >> ob1;
	cout << ob1;
	return 0;
}
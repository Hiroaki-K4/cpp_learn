#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class account {
	int custnum;
	char name[80];
	double balance;
public:
	account(int c, char *n, double b)
	{
		custnum = c;
		strcpy(name, n);
		balance = b;
	}
	friend ostream &operator<<(ostream &stream, account ob);
};

ostream &operator<<(ostream &stream, account ob)
{
	stream << ob.custnum << ' ' << ob.name << ' ' << ob.balance;
	stream << "\n";
	return stream;
}

int main()
{
	account ob1(24, "hiro", 3.0);
	ofstream out("tensai", ios::out | ios::binary);
	out << ob1;
	return 0;
}
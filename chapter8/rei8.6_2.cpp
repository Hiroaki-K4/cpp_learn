#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class inventory {
	char item[40];
	int onhand;
	double cost;
public:
	inventory(char *i, int o, double c)
	{
		strcpy(item , i);
		onhand = o;
		cost = c;
	}
	friend ostream &operator<<(ostream &stream, inventory ob);
	friend istream &operator>>(istream &stream, inventory &ob);
};

ostream &operator<<(ostream &stream, inventory ob)
{
	stream << ob.item << ": 在庫数は: " << ob.onhand;
	stream << "　費用は: $" << ob.cost << endl;
	return stream;
}

istream &operator>>(istream &stream, inventory &ob)
{
	cout << "品名を入力: ";
	stream >> ob.item;
	cout << "在庫数を入力: ";
	stream >> ob.onhand;
	cout << "原価を入力: ";
	stream >> ob.cost;
	return stream;
}

int main()
{
	inventory ob("金づち", 4, 12.55);
	cout << ob;
	cin >> ob;
	cout << ob;
	return 0;
}
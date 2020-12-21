#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class vehicle {
	int num_wheels;
	int range;
public:
	vehicle(int w, int r)
	{
		num_wheels = w; range = r;
	}
	void showv()
	{
		cout << "車輪の数: " << num_wheels << endl;
		cout << "走行距離: " << range << endl;
	}
};

class car : public vehicle {
	int passengers;
public:
	car(int a, int b, int c) : vehicle(b, c) {
		passengers = a;
	}
	void show()
	{
		showv();
		cout << "乗客定員: " << passengers << endl;
	}
};

class truck : public vehicle {
	int loadlimit;
public:
	truck(int a, int b, int c) : vehicle(b, c) {
		loadlimit = a;
	}
	void show()
	{
		showv();
		cout << "積載量: " << loadlimit << endl;
	}
};

int main()
{
	car c(5, 4, 500);
	truck t(30000, 12, 1200);

	cout << "乗用車: " << endl;
	c.show();
	cout << "トラック: " << endl;
	t.show();
	return 0;
}
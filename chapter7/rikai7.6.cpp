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

enum motor {gas, electric, diesel};

class motorized : virtual public vehicle {
	enum motor mtr;
public:
	motorized(enum motor m, int w, int r) : vehicle(w, r)
	{
		mtr = m;
	}
	void showm() {
		cout << "エンジン: ";
		switch (mtr)
		{
		case gas : cout << "ノーマル" << endl;
			break;
		case electric : cout << "電気" << endl;
			break;
		case diesel : cout << "ディーゼル" << endl;
			break;
		}
	}
};

class road_use : virtual public vehicle {
	int passengers;
public:
	road_use(int p, int w, int r) : vehicle(w, r)
	{
		passengers = p;
	}
	void showr()
	{
		cout << "乗車定員: " << passengers << endl;
	}
};

enum steering { power, rack_pinion, manual };

class car : public motorized, public road_use {
	enum steering strng;
public:
	car(enum steering s, enum motor m, int w, int r, int p) : road_use(p, w, r), motorized(m, w, r), vehicle(w, r)
	{
		strng = s;
	}
	void show() {
		showv(); showr(); showm();
		cout << "ハンドル: ";
		switch(strng) {
			case power : cout << "パワー" << endl;
				break;
			case rack_pinion : cout << "ラックアンドピニオン" << endl;
				break;
			case manual : cout << "マニュアル" << endl;
				break;
		}
	}
};

int main()
{
	car c(power, gas, 4, 500, 5);
	c.show();
	return 0;
}
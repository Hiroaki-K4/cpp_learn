#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class building {
public:
	int floor;
	int room;
	int area;
	building(int a, int b, int c) {
		floor = a;
		room = b;
		area = c;
	}
};

class house : public building {
public:
	int bed;
	int bath;
	house(int a, int b, int c, int d, int e) : building(c, d, e) {
		bed = a;
		bath = b;
	}
};

class office : public building {
public:
	int fire;
	int phone;
	office(int a, int b, int c, int d, int e) : building(c, d, e) {
		fire = a;
		phone = b;
	}
};

int main()
{
	house ob1(1, 2, 3, 4, 5);
	office ob2(6, 7, 8, 9, 10);
	cout << ob1.floor << " " << ob1.room << " " << ob1.area << " " << ob1.bed << " " << ob1.bath << endl;
	cout << ob2.floor << " " << ob2.room << " " << ob2.area << " " << ob2.fire << " " << ob2.phone << endl;
	return 0; 
}
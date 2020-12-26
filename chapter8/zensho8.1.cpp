#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class airship {
public:
	int passengers;
	int kamotu;
	airship(int a, int b) { passengers = a; kamotu = b; }
};

class airplane : virtual public airship {
	char* engine;
	int distance;
public:
	airplane(int a, int b, char* c, int d) : airship(a, b) {
		engine = c;
		distance = d;
	}
	void showa() {
		cout << "乗客: " << passengers << " 貨物: " << kamotu << " エンジン: " 
		<< engine << " 距離: " << distance << endl;
	}
};

class balloon : virtual public airship {
	char* air;
	int height;
public:
	balloon(int a, int b, char* c, int d) : airship(a, b) {
		air = c;
		height = d;
	}
	void showb() {
		cout << "乗客: " << passengers << " 貨物: " << kamotu << " 気体: "
		<< air << " 高度: " << height << endl;
	}
};

int main()
{
	airplane ob1(1, 2, "ジェット", 300);
	balloon ob2(2, 3, "水素", 1000);
	ob1.showa();
	ob2.showb();
	return 0; 
}
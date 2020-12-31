#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class planet {
protected:
	double distance;
	int revolve;
public:
	planet(double d, int r) { distance = d; revolve = r; }
};

class earth : public planet {
	double circumference;
public:
	earth(double d, int r) : planet(d, r) {
		circumference = 2 * distance * 3.1416;
	}
	void show() {
		cout << "太陽からの距離: " << distance << endl;
		cout << "公転周期: " << revolve << endl;
		cout << "軌道の円周: " << circumference << endl;
	}
	friend ostream &operator<<(ostream &stream, earth ob);
};

ostream &operator<<(ostream &stream, earth ob)
{
	stream << "太陽からの距離: " << ob.distance << endl;
	stream << "公転周期: " << ob.revolve << endl;
	stream << "軌道の円周: " << ob.circumference << endl;
	return stream;
}

int main()
{
	earth ob(93000000, 365);
	cout << ob;
	// ob.show();
	return 0;
}
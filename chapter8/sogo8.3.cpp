#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;



class ft_to_inches {
	double feet;
	double inches;
public:
	void set(double f) {
		feet = f;
		inches = f * 12;
	}
	friend ostream &operator<<(ostream &stream, ft_to_inches ob);
	friend istream &operator>>(istream &stream, ft_to_inches &ob);
};

ostream &operator<<(ostream &stream, ft_to_inches ob)
{
	stream << "feet: " << ob.feet << " inches: " << ob.inches << endl;
	return stream;
}

istream &operator>>(istream &stream, ft_to_inches &ob)
{
	stream >> ob.feet;
	ob.inches = ob.feet * 12;
	return stream;
}

int main()
{
	ft_to_inches ob1;
	cin >> ob1;
	cout << ob1;
	return 0;
}
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class samp {
	int a;
public:
	samp(int x) { a = x; }
	samp() { a = 0; }
	int get_a() { return a; }
};

int main()
{
	samp ob(88);
	samp obarray[10];
	cout << ob.get_a() << endl;
	cout << obarray->get_a() << endl;
	return 0;
}
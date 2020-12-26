#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class base {
	int i, j;
public:
	base(int a, int b) { i = a; j = b; }
	void showij() { cout << i << ' ' << j << endl; }
};

class derived : public base {
	int k;
public:
	derived(int a, int b, int c) : base(a, b) { k = c; }
	void show() { cout << k << ' '; showij(); }
};

int main()
{
	derived ob(1, 2, 3);
	ob.show();
	return 0;
}
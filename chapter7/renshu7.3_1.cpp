#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class mybase {
	char str[80];
public:
	mybase(char *s) { strcpy(str, s); }
	char *get() { return str; }
};

class myderived : public mybase {
	int len;
public:
	myderived(char *str) : mybase(str) {
		len = strlen(str);
	}
	int getlen() { return len; }
	void show() { cout << get() << endl; }
};

int main()
{
	myderived ob("hello");

	ob.show();
	cout << ob.getlen() << endl;
	return 0;
}
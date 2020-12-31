#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class strtype {
	char *p;
	int len;
public:
	strtype(char *ptr);
	~strtype() { delete [] p; }
	friend ostream &operator<<(ostream &stream, strtype &ob);
};

strtype::strtype(char *ptr)
{
	len = strlen(ptr) + 1;
	p = new char [len];
	if (!p) {
		cout << "メモリ割り当て" << endl;
		exit(1);
	}
	strcpy(p, ptr);
}

int main()
{
	strtype s1("This is a test."), s2("I like C++.");
	cout << s1 << "\n" << s2;
	return 0;
}
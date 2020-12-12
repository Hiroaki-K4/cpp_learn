#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class strtype {
	char *p;
	int len;
public:
	strtype(char *s);
	~strtype() {
		cout << p << "を解放する" << endl;
		delete [] p;
	}
	char *get() { return p; }
	strtype &operator=(strtype &ob);
	char &operator[](int i) { return p[i]; }
};

strtype::strtype(char *s)
{
	int l;

	l = strlen(s) + 1;
	p = new char [l];
	if (!p) {
		cout << "メモリ割り当てエラー" << endl;
		exit(1);
	}
	len = l;
	strcpy(p, s);
}

strtype &strtype::operator=(strtype &ob)
{
	if (len < ob.len) {
		delete [] p;
		p = new char [ob.len];
		if (!p) {
			cout << "メモリ割り当てエラー" << endl;
			exit(1);
		}
	}
	len = ob.len;
	strcpy(p, ob.p);
	return *this;
}

int main()
{
	strtype a("Hello"), b("There");
	int i;

	for (i = 0; i < 5; i++) cout << a.get()[i] << endl;

	a = b;
	for (i = 0; i < 5; i++) cout << a.get()[i] << endl;

	a[0] = 'X';
	a[1] = 'Y';
	a[2] = 'Z';
	for (i = 0; i < 5; i++) cout << a.get()[i] << endl;
	return 0;
}
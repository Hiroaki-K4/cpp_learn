#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class dynarray {
	int *p;
	int size;
public:
	dynarray(int s);
	dynarray &operator=(dynarray &ob);
	int &operator[](int i);
};

dynarray::dynarray(int s)
{
	p = new int [s];
	if (!p) {
		cout << "メモリ割り当てエラー" << endl;
		exit(1);
	}
	size = s;
}

int &dynarray::operator[](int i)
{
	if (i < 0 || i > size - 1) {
		cout << "境界エラー" << endl;
		exit(1);
	}
	return p[i];
}

dynarray &dynarray::operator=(dynarray &ob)
{
	int i;

	if (size != ob.size) {
		cout << "different size!" << endl;
		exit(1);
	}

	for (i = 0; i < size; i++) p[i] = ob.p[i];
	return *this;
}

int main()
{
	int i;

	dynarray ob1(10), ob2(10), ob3(100);
	ob1[3] = 10;
	i = ob1[3];
	cout << i << endl;

	ob2 = ob1;

	i = ob2[3];
	cout << i << endl;
	ob1 = ob3;
	return 0;
}
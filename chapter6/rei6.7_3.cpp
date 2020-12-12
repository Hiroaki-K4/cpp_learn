#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


const int SIZE = 5;

class arraytype {
	int a[SIZE];
public:
	arraytype() {
		int i;
		for (i = 0; i < SIZE; i++) a[i] = i;
	}
	int &operator[] (int i);
};


int &arraytype::operator[] (int i)
{
	if (i < 0 || i > SIZE - 1) {
		cout << i << "は境界エラー" << endl;
		exit(1);
	}
	return a[i];
}

int main()
{
	arraytype ob;
	int i;

	for (i = 0; i < SIZE; i++)
		cout << ob[i] << endl;

	ob[SIZE+100] = 99;
	
	return 0;
}
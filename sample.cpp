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
	int &put(int i);
	int get(int i);
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


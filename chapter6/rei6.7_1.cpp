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
	int operator[] (int i) { return a[i]; }
};

int main()
{
	arraytype ob;
	int i;

	for (i = 0; i < SIZE; i++)
		cout << ob[i] << endl;
	
	return 0;
}
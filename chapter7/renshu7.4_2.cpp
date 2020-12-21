#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class A {
	int i;
public:
	A(int a) { i = a; }
};

class B {
	int j;
public:
	B(int a) { j = a; }
};

class C : public A, public B {
	int k;
public:
	C(int x, int y, int z) : A(z), B(y)
	{
		k = x;
	}
};
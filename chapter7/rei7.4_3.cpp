#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class B1 {
	int a;
public:
	B1() { cout << "B1のコンストラクタ呼び出し" << endl; }
	~B1() { cout << "B1のデストラクタ呼び出し" << endl; }
};

class B2 {
	int b;
public:
	B2() { cout << "B2のコンストラクタ呼び出し" << endl; }
	~B2() { cout << "B2のデストラクタ呼び出し" << endl; }
};

class D : public B1, public B2 {
public:
	D() { cout << "Dのコンストラクタ呼び出し" << endl; }
	~D() { cout << "Dのデストラクタ呼び出し" << endl; }
};

int main()
{
	D ob;
	return 0;
}
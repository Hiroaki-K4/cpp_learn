#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class base {
public:
	base() { cout << "baseクラスのコンストラクタ呼び出し" << endl; }
	~base() { cout << "baseクラスのデストラクタ呼び出し" << endl; }
};

class derived : public base {
public:
	derived() { cout << "derivedクラスのコンストラクタ呼び出し" << endl; }
	~derived() { cout << "derivedクラスのデストラクタ呼び出し" << endl; }
};

int main()
{
	derived o;
	return 0;
}
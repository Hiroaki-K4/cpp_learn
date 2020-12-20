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
	int j;
public:
	derived(int n) {
		cout << "derivedクラスのコンストラクタ呼び出し" << endl;
		j = n;
	}
	~derived() { cout << "derivedクラスのデストラクタ呼び出し" << endl; }
	void showj() { cout << j << endl; }
};

int main()
{
	derived o(10);
	o.showj();
	return 0;
}
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class base {
	int i;
public:
	base(int n) { 
		cout << "baseクラスのコンストラクタ呼び出し" << endl;
		i = n;	
	}
	~base() { cout << "baseクラスのデストラクタ呼び出し" << endl; }
	void showi() { cout << i << endl; }
};

class derived : public base {
	int j;
public:
	derived(int n, int m) : base(m) {
		cout << "derivedクラスのコンストラクタ呼び出し" << endl;
		j = n;
	}
	~derived() { cout << "derivedクラスのデストラクタ呼び出し" << endl; }
	void showj() { cout << j << endl; }
};

int main()
{
	derived o(10, 20);
	o.showi();
	o.showj();
	return 0;
}
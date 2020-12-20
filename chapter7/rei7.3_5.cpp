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
	derived(int n) : base(n) {
		cout << "derivedクラスのコンストラクタ呼び出し" << endl;
		j = 0;
	}
	~derived() { cout << "derivedクラスのデストラクタ呼び出し" << endl; }
	void showj() { cout << j << endl; }
};

int main()
{
	derived o(10);
	o.showi();
	o.showj();
	return 0;
}
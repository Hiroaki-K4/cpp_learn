#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	bool b;

	cout << "boolalphaフラグをセットする前: ";
	b = true;
	cout << b << " ";
	b = false;
	cout << b << endl;

	cout << "boolalphaフラグをセットした後: ";
	b = true;
	cout << boolalpha << b << " ";
	b = false;
	cout << b << endl;

	cout << "ブール値を入力: ";
	cin >> boolalpha >> b;
	cout << b << "を入力しました" << endl;

	return 0;
}
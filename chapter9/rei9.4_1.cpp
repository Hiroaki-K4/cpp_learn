#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	char str[80];

	cout << "名前を入力してください: ";
	cin.getline(str, 79);
	cout << str << endl;
	return 0;
}
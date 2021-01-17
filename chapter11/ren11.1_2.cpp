#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


template <class X> X my_min(X a, X b)
{
	if (a <= b) return a;
	else return b;
}

int main()
{
	cout << my_min(3, 4) << endl;
	cout << my_min('c', 'a') << endl;
	return 0;
}
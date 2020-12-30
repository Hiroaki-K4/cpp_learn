#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	cout << resetiosflags(ios::basefield) << setiosflags(ios::showbase | ios::hex) << 100 << endl;
	return 0;
}
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


void center(char *s)
{
	int len;

	len = 40 + strlen(s) / 2;
	cout.width(len);
	cout << s << endl;
}

int main()
{
	char* s1 = "hello";

	center(s1);
	return 0;
}
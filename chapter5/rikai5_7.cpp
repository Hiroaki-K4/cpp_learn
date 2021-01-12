#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


void reverse(char *str, int count = 0)
{
	int i, j;
	char temp;

	if (!count) count = strlen(str) - 1;
	for (i = 0, j = count; i < j; i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

int main()
{
	char str[] = "abcde";
	reverse(str, 1);
	cout << str << endl;;
}
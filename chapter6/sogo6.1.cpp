#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class strtype {
	char s[80];
public:
	strtype(char *word) { strcpy(s, word); }
	strtype() { *s = '\0'; }
	char *get() { return s; }
	strtype operator+(strtype ob);
	strtype operator=(strtype ob);
	int operator>(strtype ob);
	int operator<(strtype ob);
	int operator==(strtype ob);
};

strtype strtype::operator+(strtype ob)
{
	strtype temp;
	strcpy(temp.s, s);
	strcat(temp.s, ob.s);

	return temp;
}

strtype strtype::operator=(strtype ob)
{
	strcpy(s, ob.s);

	return *this;
}

int strtype::operator>(strtype ob)
{
	return (strcmp(s, ob.s) > 0);
}

int strtype::operator<(strtype ob)
{
	return (strcmp(s, ob.s) < 0);
}

int strtype::operator==(strtype ob)
{
	return (strcmp(s, ob.s) == 0);
}

int main()
{
	strtype test1("Hello"), test2("World"), test3("Hello"), ans;
	ans = test1 + test2;
	cout << ans.get() << endl;

	ans = test1;
	cout << ans.get() << endl;
	
	cout << (test1 < test2) << endl;
	cout << (test1 > test2) << endl;
	cout << (test1 == test3) << endl;
	return 0;
}

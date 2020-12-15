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
	strtype operator+(strtype ob);
};

strtype strtype::operator+(strtype ob)
{
	strtype temp;
	temp.s = strcpy(temp.s, s);
	temp.s = strcat(temp.s, ob.s);

	return temp;
}

int main()
{
	char s1[80] = "Hello"
	strtype test(s1), ans;
	ans = test + "World";
	cout << ans << endl;
	return 0;
}

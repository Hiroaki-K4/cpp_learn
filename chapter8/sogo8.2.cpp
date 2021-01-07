#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;



class watch {
	time_t t;
public:
	watch() { t = time(NULL); }
	friend ostream &operator<<(ostream &stream, watch ob);
};

ostream &operator<<(ostream &stream, watch ob)
{
	char *ans;

	ans = asctime(localtime(&ob.t));
	stream << ans;
	return stream;
}


int main()
{
	watch ob1;
	cout << ob1;
	return 0;
}
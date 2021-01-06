#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class square {
	int len;
public:
	square(int a) { len = a; }
	friend ostream operator<<(ostream &stream, square ob);
};

friend ostream operator<<(ostream &stream, square ob)
{
	
}
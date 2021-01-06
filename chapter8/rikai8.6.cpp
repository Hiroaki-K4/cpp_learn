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
	friend ostream &operator<<(ostream &stream, square ob);
};

ostream &operator<<(ostream &stream, square ob)
{
	int i;
	int j;

	for (i = 0; i < ob.len; i++)
	{
		for (j = 0; j < ob.len; j++)
		{
			if (i == 0 || i == ob.len - 1)
			{
				stream << "*";
				if (j == ob.len - 1)
				{
					stream << "\n";
				}
			}
			else if (j == 0 && i != 0 && i != ob.len - 1)
			{
				stream << "*";
			}
			else if (j == ob.len - 1 && i != 0 && i != ob.len - 1)
			{
				stream << "*" << endl;
			}
			else
			{
				stream << " ";
			}
		}
	}
	return stream;
}

int main()
{
	square ob1(10);
	cout << ob1;
	return 0;
}
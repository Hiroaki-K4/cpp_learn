#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class date {
	int day, month, year;
public:
	date(char *str);
	date(int m, int d, int y) {
		day = d;
		month = m;
		year = y;
	}
	date(time_t t);
	void show() {
		cout << month << '/' << day << '/';
		cout << year << endl;
	}
};

date::date(char *str)
{
	sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

date::date(time_t t)
{
	struct tm *p;

	p = localtime(&t);
	day = p->tm_mday;
	month = p->tm_mon;
	year = p->tm_year;
}

int main()
{
	date sdate("12/31/99");
	date idate(12, 31, 99);
	date tdate(time(NULL));
	sdate.show();
	idate.show();
	tdate.show();
	return 0;
}
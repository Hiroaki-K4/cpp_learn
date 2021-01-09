#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;



ostream &atn(ostream &stream)
{
	stream << "警告: ";
	return stream;
}

ostream &note(ostream &stream)
{
	stream << "注意: ";
	return stream;
}

int main()
{
	cout << atn << "高圧回路" << endl;
	cout << note << "消灯" << endl;
	return 0;
}
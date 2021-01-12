#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	char ch;

	ofstream out("test", ios::out | ios::binary);

	if (!out) {
		cout << "出力ファイルが開けません\n";
		return 1;
	}
	char str[80], *p;

	out << 123 << "this is a test" << 23;
	out << "Hello there!" << 99 << "sdf" << endl;
	out.close();

	ifstream in("test", ios::in | ios::binary);

	if (!in) {
		cout << "入力ファイルが開けません\n";
		return 1;
	}

	do {
		p = str;
		ch = in.peek();

		if (isdigit(ch)) {
			while (isdigit(*p = in.get())) p++;
			in.putback(*p);
			*p = '\0';
			cout << "文字列: " << str;
		}
		else if (isalpha(ch)) {
			while (isalpha(*p = in.get())) p++;
			in.putback(*p);
			*p = '\0';
			cout << "文字列: " << str;
		}
		else in.get();
		cout << "\n";
	} while (!in.eof());
	in.close();
	return 0;
}
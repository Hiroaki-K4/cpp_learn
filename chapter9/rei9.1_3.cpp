#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


istream &getpass(istream &stream)
{
	cout << "\a";
	cout << "パスワードを入力: ";
	return stream;
}

int main()
{
	char pw[80];

	do {
		cin >> getpass >> pw;
	} while (strcmp(pw, "password"));
	cout << "ログオン完了" << endl;
	return 0;
}
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
	ofstream out("test", ios::out | ios::binary);

	if (!out) {
		cout << "出力ファイルが開けません\n";
		return 1;
	}

	double nums[4] = {1.1, 2.2, 3.3, 4.4};
	out.write((char *) nums, sizeof(nums));
	out.close();

	ifstream in("test", ios::in | ios::binary);

	if (!in) {
		cout << "入力ファイルが開けません\n";
		return 1;
	}

	in.read((char *) &nums, sizeof(nums));

	int i;
	for (i = 0; i < 4; i++)
		cout << nums[i] << ' ';
	cout << "\n";

	cout << in.gcount() << "文字を読み込みました\n";
	in.close();
	return 0;
}
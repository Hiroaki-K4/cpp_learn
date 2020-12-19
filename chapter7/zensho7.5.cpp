#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class array {
	int nums[10];
public:
	array();
	void set(int n[10]);
	void show();
	friend array operator+(array ob1, array ob2);
	friend array operator-(array ob1, array ob2);
	friend int operator==(array ob1, array ob2);
};

array::array()
{
	int i;

	for (i = 0; i < 10; i++) nums[i] = 0;
}

void array::set(int *n)
{
	int i;

	for (i = 0; i < 10; i++) nums[i] = n[i];
}

void array::show()
{
	int i;

	for (i = 0; i < 10; i++)
		cout << nums[i] << ' ';
	cout << '\n';
}

array operator+(array ob1, array ob2)
{
	array temp;
	int i;

	for (i = 0; i < 10; i++)
	{
		temp.nums[i] = ob1.nums[i] + ob2.nums[i];
	}

	return temp;
}

array operator-(array ob1, array ob2)
{
	array temp;
	int i;

	for (i = 0; i < 10; i++)
	{
		temp.nums[i] = ob1.nums[i] - ob2.nums[i];
	}

	return temp;
}

int operator==(array ob1, array ob2)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (ob1.nums[i] != ob2.nums[i])
			return 0;
	}
	return 1;
}

int main()
{
	array o1, o2, o3;
	int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	o1.set(i);
	o2.set(i);

	o3 = o1 + o2;
	o3.show();

	o3 = o1 - o2;
	o3.show();

	if (o1 == o2) cout << "o1とo2は同じ" << endl;
	else cout << "o1とo2は異なる" << endl;

	if (o1 == o3) cout << "o1とo3は同じ" << endl;
	else cout << "o1とo3は異なる" << endl;

	return 0;
}
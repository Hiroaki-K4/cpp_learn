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
	array operator+(array ob2);
	array operator-(array ob2);
	int operator==(array ob2);
	array operator++();
	friend array operator--(array &ob2);
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

array array::operator+(array ob2)
{
	array temp;
	int i;

	for (i = 0; i < 10; i++)
	{
		temp.nums[i] = nums[i] + ob2.nums[i];
	}

	return temp;
}

array array::operator-(array ob2)
{
	array temp;
	int i;

	for (i = 0; i < 10; i++)
	{
		temp.nums[i] = nums[i] - ob2.nums[i];
	}

	return temp;
}

int array::operator==(array ob2)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (nums[i] != ob2.nums[i])
			return 0;
	}
	return 1;
}

array array::operator++()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		nums[i]++;
	}
	return *this;
}

array operator--(array &ob2)
{
	array temp;
	int i;

	for (i = 0; i < 10; i++)
	{
		temp.nums[i] = ob2.nums[i]--;
	}
	return temp;
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
	
	++o1;
	o1.show();
	--o2;
	o2.show();

	return 0;
}
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
};


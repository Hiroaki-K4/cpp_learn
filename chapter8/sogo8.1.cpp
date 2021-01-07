#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


#define SIZE 10

class stack {
	char stck[SIZE];
	int tos;
public:
	stack();
	void push(char ch);
	char pop();
	friend ostream &operator<<(ostream &stream, stack ob);
};

stack::stack()
{
	tos = 0;
}

void stack::push(char ch)
{
	if (tos==SIZE) {
		cout << "スタックは一杯です" << endl;
		return;
	}
	stck[tos] = ch;
	tos++;
}

char stack::pop()
{
	if (tos==0) {
		cout << "スタックは空です" << endl;
		return 0;
	}
	tos--;
	return stck[tos];
}

ostream &operator<<(ostream &stream, stack ob)
{
	char ch;

	while (ch = ob.pop())
	{
		stream << ch << endl;
	}
	return stream;
}

int main()
{
	stack ob1;
	ob1.push('a');
	ob1.push('b');
	cout << ob1;
	return 0;
}
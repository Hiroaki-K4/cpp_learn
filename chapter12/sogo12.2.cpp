#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class Shape {
public:
    virtual void example() = 0;
};

class Rectangle: public Shape {
public:
    void example() {
        cout << "*****\n*   *\n*****\n";
    }
};

class Triangle: public Shape {
public:
    void example() {
        cout << "*\n* *\n*  *\n*****\n";
    }
};

class Line: public Shape {
public:
    void example() {
        cout << "******\n";
    }
};

class NullShape: public Shape {
public:
    void example() {
    }
};

Shape *generator()
{
    Shape *temp;
    switch(rand() % 4) {
        case 0:
            temp = new(nothrow) Line;
            break;
        case 1:
            temp = new(nothrow) Rectangle;
            break;
        case 2:
            temp = new(nothrow) Triangle;
            break;
        case 3:
            temp = new(nothrow) NullShape;
    }
    if (temp) return temp;
    else return NULL;
}

int main()
{
    int i;
    Shape *p;

    for (i = 0; i < 10; i++) {
        p = generator();
        cout << typeid(*p).name() << endl;
        if (typeid(*p) != typeid(NullShape))
            p->example();
    }
    return 0;
}
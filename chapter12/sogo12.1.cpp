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
    try {
        switch(rand() % 4) {
            case 0:
                return new Line;
            case 1:
                return new Rectangle;
            case 2:
                return new Triangle;
            case 3:
                return new NullShape;
        }
    }
    catch (bad_alloc ba) {
        return NULL;
    }
    return NULL;
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
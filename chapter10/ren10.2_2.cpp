#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class dist {
public:
    double distance;
    dist(double n) { distance = n; }
    virtual void trav_time() {
        cout << distance / 60 << endl;
    }
};

class metric : public dist {
public:
    metric(double n) : dist(n) {};
    void trav_time() {
        cout << distance / 100 << endl;
    }
};

int main()
{
    dist *p;
    dist ob1(100.0);
    p = &ob1;
    p->trav_time();
    metric ob2(100.0);
    p = &ob2;
    p->trav_time();
    return 0;
}
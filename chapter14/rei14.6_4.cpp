#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <strstream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
using namespace std;


int xform(int i) {
    return i * i;
}

int main()
{
    list<int> xl;
    int i;

    for (i = 0; i < 10; i++) xl.push_back(i);

    cout << "最初のxlの内容: ";
    list<int>::iterator p = xl.begin();
    while (p != xl.end()) {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    p = transform(xl.begin(), xl.end(), xl.begin(), xform);

    cout << "変形後のx1の内容: ";
    p = xl.begin();
    while (p != xl.end()) {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    return 0;
}
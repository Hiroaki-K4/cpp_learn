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
#include <string>
using namespace std;


int main()
{
    vector<int> v;
    int i;

    for (i = 0; i < 10; i++) {
        v.push_back(i);
    }

    list<int> l;
    for (i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            l.push_back(v[i]);
        }
    }

    list<int>::iterator p;
    p = l.begin();
    while (p != l.end()) {
        cout << *p << " ";
        p++;
    }
    cout << endl;
}
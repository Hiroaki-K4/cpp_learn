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
    list<string> l;
    l.push_back("one");
    l.push_back("two");
    l.push_back("three");
    l.push_back("four");
    l.push_back("five");
    l.push_back("six");
    l.push_back("seven");
    l.push_back("eight");
    l.push_back("nine");
    l.push_back("ten");
    l.sort();
    list<string>::iterator p;
    p = l.begin();
    while (p != l.end()) {
        cout << *p << " ";
        p++;
    }
    cout << endl;
    return 0;
}
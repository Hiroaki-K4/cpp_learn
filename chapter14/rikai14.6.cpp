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


class name {
    string str;
public:
    name() { str = ""; }
    name(string s) { str = s; }
    string get() { return str; }
};

bool operator<(name a, name b)
{
    return a.get() < b.get();
}

class phone {
    string str;
public:
    phone() { str = ""; }
    phone(string s) { str = s; }
    string get() { return str; }
};

int main()
{
    map<name, phone> m;

    m.insert(pair<name, phone>(name("hiro"), phone("080-2111-3242")));
    m.insert(pair<name, phone>(name("yamamon"), phone("030-2345-2345")));

    string str;
    cout << "単語を入力: ";
    cin >> str;

    map<name, phone>::iterator p;
    p = m.find(name(str));
    if (p != m.end())
        cout << "電話番号: " << p->second.get() << endl;
    else
        cout << "名前がマップにない" << endl;

    return 0;
}
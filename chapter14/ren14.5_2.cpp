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
using namespace std;


class name {
    char str[20];
public:
    name() { strcpy(str, ""); }
    name(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

bool operator<(name a, name b)
{
    return strcmp(a.get(), b.get()) < 0;
}

class phone {
    char str[20];
public:
    phone() { strcpy(str, ""); }
    phone(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

int main()
{
    map<name, phone> m;

    m.insert(pair<name, phone>(name("hiro"), phone("080-2111-3242")));
    m.insert(pair<name, phone>(name("yamamon"), phone("030-2345-2345")));

    char str[80];
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
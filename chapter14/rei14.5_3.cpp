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


class word {
    char str[20];
public:
    word() { strcpy(str, ""); }
    word(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

bool operator<(word a, word b)
{
    return strcmp(a.get(), b.get()) < 0;
}

class opposite {
    char str[20];
public:
    opposite() { strcpy(str, ""); }
    opposite(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

int main()
{
    map<word, opposite> m;

    m.insert(pair<word, opposite>(word("yes"), opposite("no")));
    m.insert(pair<word, opposite>(word("good"), opposite("bad")));
    m.insert(pair<word, opposite>(word("left"), opposite("right")));
    m.insert(pair<word, opposite>(word("up"), opposite("down")));

    char str[80];
    cout << "単語を入力: ";
    cin >> str;

    map<word, opposite>::iterator p;
    p = m.find(word(str));
    if (p != m.end())
        cout << "反対語: " << p->second.get() << endl;
    else
        cout << "単語がマップにない" << endl;

    return 0;
}
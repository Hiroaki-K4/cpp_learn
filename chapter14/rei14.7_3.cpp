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
    map<string, string> m;
    int i;

    m.insert(pair<string, string>("yes", "no"));
    m.insert(pair<string, string>("up", "down"));
    m.insert(pair<string, string>("left", "right"));
    m.insert(pair<string, string>("good", "bad"));

    string s;
    cout << "単語を入力: ";
    cin >> s;

    map<string, string>::iterator p;

    p = m.find(s);
    if (p != m.end())
        cout << "反対語: " << p->second << endl;
    else
        cout << "単語がマップにない\n";

    return 0;
}
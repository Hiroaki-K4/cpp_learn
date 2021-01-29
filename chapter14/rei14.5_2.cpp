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

int main()
{
    map<char, int> m;
    int i;

    for (i = 0; i < 10; i++) {
        m.insert(make_pair((char)'A' + i, i));
    }

    char ch;
    cout << "キーを入力: ";
    cin >> ch;

    map<char, int>::iterator p;
    p = m.find(ch);
    if (p != m.end())
        cout << p->second << endl;
    else
        cout << "キーはマップにない" << endl;

    return 0;
}
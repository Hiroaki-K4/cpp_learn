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
using namespace std;


int main()
{
    list<char> lst;
    list<char> revlst;
    int i;

    for (i = 0; i < 10; i++) lst.push_back('A' + i);

    cout << "lstの大きさ = " << lst.size() << endl;
    cout << "もとの内容: ";

    list<char>::iterator p;

    cout << "内容: ";
    while (!lst.empty()) {
        p = lst.begin();
        cout << *p;
        lst.pop_front();
        revlst.push_front(*p);
    }
    cout << endl << endl;

    cout << "revlstの大きさ = " << revlst.size() << endl;
    cout << "逆順の内容: ";
    p = revlst.begin();
    while (p != revlst.end()) {
        cout << *p;
        p++;
    }
    cout << endl;

    return 0;
}
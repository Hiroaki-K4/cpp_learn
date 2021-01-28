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
    list<char> lst1, lst2;
    int i;

    for (i = 0; i < 10; i += 2) lst1.push_back('A' + i);
    for (i = 1; i < 11; i += 2) lst2.push_back('A' + i);

    cout << "lst1の内容: ";
    list<char>::iterator p = lst1.begin();
    while (p != lst1.end()) {
        cout << *p;
        p++;
    }
    cout << endl << endl;

    cout << "lst1の内容: ";
    p = lst2.begin();
    while (p != lst2.end()) {
        cout << *p;
        p++;
    }
    cout << endl << endl;

    lst1.merge(lst2);
    if (lst2.empty())
        cout << "lst2は空" << endl;
    cout << "統合後のlst1の内容: ";
    p = lst1.begin();
    while (p != lst1.end()) {
        cout << *p;
        p++;
    }
    cout << endl;

    return 0;
}
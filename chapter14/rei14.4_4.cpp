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
    int i;

    for (i = 0; i < 10; i++)
        lst.push_back('A' + rand() % 26);

    cout << "もとの内容: ";
    list<char>::iterator p = lst.begin();

    while (p != lst.end()) {
        cout << *p;
        p++;
    }
    cout << endl << endl;

    lst.sort();

    cout << "処理した内容: ";
    p = lst.begin();
    while (p != lst.end()) {
        cout << *p;
        p++;
    }
    cout << endl;

    return 0;
}
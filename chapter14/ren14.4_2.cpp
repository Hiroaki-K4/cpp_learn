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

    for (i = 0; i < 10; i++) lst.push_back('A' + i);

    cout << "大きさ = " << lst.size() << endl;

    list<char>::iterator p;

    cout << "内容: ";
    for (i = 0; i < lst.size(); i++) {
        p = lst.begin();
        cout << *p;
        lst.pop_front();
        lst.push_back(*p);
    }
    cout << endl;
    if (!lst.empty())
        cout << "リストは空ではない\n";

    return 0;
}
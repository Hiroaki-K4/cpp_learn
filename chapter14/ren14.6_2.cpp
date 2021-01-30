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
using namespace std;


int main()
{
    vector<int> v, v2, v3(20);
    int i;
    for (i = 0; i < 10; i++)
        v.push_back(rand() % 100);

    cout << "v1: ";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    for (i = 0; i < 10; i++)
        v2.push_back(rand() % 99);

    cout << "v2: ";
    for (i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());
    for (i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}
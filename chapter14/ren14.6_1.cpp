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


int xform(int i) {
    return i * i;
}

int main()
{
    vector<int> v;
    int i;
    for (i = 0; i < 10; i++)
        v.push_back(rand() % 100);

    cout << "ソート前: ";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    cout << "ソート後: ";
    sort(v.begin(), v.end());
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    
    return 0;
}
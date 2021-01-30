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
    vector<int> v;
    int i;

    for (i = 0; i < 10; i++) v.push_back(i);

    cout << "初期状態: ";
    for (i = 0; i < 10; i++) cout << v[i] << " ";
    cout << endl;

    reverse(v.begin(), v.end());

    cout << "逆順: ";
    for (i = 0; i < 10; i++) cout << v[i] << " ";
    cout << endl;
    
    return 0;
}
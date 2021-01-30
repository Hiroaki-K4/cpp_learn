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


bool even(int x)
{
    return !(x % 2);
}

int main()
{
    vector<int> v;
    int i;

    for (i = 0; i < 20; i++) {
        if (i % 2) v.push_back(1);
        else v.push_back(2);
    }
    cout << "シーケンス: ";
    for (i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;

    int n;
    n = count(v.begin(), v.end(), 1);
    cout << n << "個です(1の要素)\n";

    n = count_if(v.begin(), v.end(), even);
    cout << n << "個です(偶数の要素)\n";

    return 0;
}
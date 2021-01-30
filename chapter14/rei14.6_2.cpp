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
    vector<int> v, v2(20);
    int i;

    for (i = 0; i < 20; i++) {
        if (i % 2) v.push_back(1);
        else v.push_back(2);
    }

    cout << "シーケンス: ";
    for (i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;

    remove_copy(v.begin(), v.end(), v2.begin(), 1);
    cout << "結果: ";
    for (i = 0; i < v2.size(); i++) cout << v2[i] << " ";
    cout << endl;

    return 0;
}
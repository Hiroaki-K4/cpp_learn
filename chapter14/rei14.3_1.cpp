#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <strstream>
#include <vector>
using namespace std;


int main()
{
    vector<int> v;
    int i;

    cout << "サイズ = " << v.size() << endl;

    for (i = 0; i < 10; i++) v.push_back(i);

    cout << "現在のサイズ = " << v.size() << endl;

    cout << "現在の内容:\n";
    for (i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;

    for (i = 0; i < 10; i++) v.push_back(i + 10);

    cout << "現在のサイズ = " << v.size() << endl;

    cout << "現在の内容:\n";
    for (i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;

    for (i = 0; i < v.size(); i++) v[i] = v[i] + v[i];

    cout << "2倍の内容:\n";
    for (i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
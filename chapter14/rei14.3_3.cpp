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
    vector<int> v(5, 1);
    int i;

    cout << "サイズ = " << v.size() << endl;
    cout << "最初の内容:\n";
    for (i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl << endl;

    vector<int>::iterator p = v.begin();
    p += 2;

    v.insert(p, 10, 9);

    cout << "挿入後のサイズ = " << v.size() << endl;
    cout << "挿入後の内容:\n";
    for (i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl << endl;

    p = v.begin();
    p += 2;
    v.erase(p, p + 10);

    cout << "削除後のサイズ = " << v.size() << endl;
    cout << "削除後の内容:\n";
    for (i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
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
#include <string>
using namespace std;


int main()
{
    string str;
    cout << "文字列を入力してください: ";
    cin >> str;
    cout << "eの数: " << count(str.begin(), str.end(), 'e') << endl;
    return 0;
}
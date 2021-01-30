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
    string str1("This is a test");
    string str2("ABCDEFG");

    cout << "最初の文字列:\n";
    cout << "文字列1: " << str1 << endl;
    cout << "文字列2: " << str2 << endl;

    cout << "文字列2を文字列1に挿入:\n";
    str1.insert(5, str2);
    cout << str1 << endl;

    cout << "文字列1から7文字を削除:\n";
    str1.erase(5, 7);
    cout << str1 << endl;

    cout << "文字列1の2文字を文字列2と入れ替え:\n";
    str1.replace(5, 2, str2);
    cout << str1 << endl;

    return 0;
}
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
    string str1("Demonstrating Strings");
    string str2("String Two");
    string str3;

    str3 = str1;
    cout << str1 << "\n" << str3 << endl;

    str3 = str1 + str2;
    cout << str3 << endl;

    if (str3 > str1) cout << "str3 > str1" << endl;
    else cout << "str3 < str1" << endl;
    if (str3 == str1 + str2) cout << "str3 == str1 + str2" << endl;
    
    str1 = "This is a normal string.\n";
    cout << str1 << endl;

    string str4(str1);
    cout << str4 << endl;

    cout << "文字列の入力: ";
    cin >> str4;
    cout << str4 << endl;
    
    return 0;
}
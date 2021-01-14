#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


istream &findalpha(istream &stream)
{
    char ch;

    do {
        stream.get(ch);
    } while (!isalpha(ch));
    stream.putback(ch);
    return stream;
}

int main()
{
    char str[80];

    cin >> findalpha >> str;
    cout << str << endl;
    return 0;
}
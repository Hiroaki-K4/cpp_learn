#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <set>
#include <map>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <cfloat>
#include <math.h>
#include <stack>
#include <queue>
#include <cstdio>
#include <iomanip>

using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
// #define req(j, n) for (ll j = 1; j < (n+1); j++)
// #define rer(k, n) for (ll k = 1; k < (n+1); k++)



int main()
{
    string word;
    int count = 0;
    cin >> word;
    string s = "a";
    rep(i, 3) {
        if (s == word[i]) {
            count += 1;
            s = word[i]
        }
    }
    cout << word << endl;
    return 0;
}
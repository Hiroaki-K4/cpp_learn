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
using namespace std;


class word {
    char str[20];
public:
    word() { strcpy(str, ""); }
    word(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

bool operator
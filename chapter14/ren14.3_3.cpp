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


class Coord {
public:
    int x, y;
    Coord() { x = y = 0; }
    Coord(int a, int b) { x = a; y = b; }
};

int main()
{
    vector<Coord> v;
    int i;

    for (i = 0; i < 10; i++)
        v.push_back(Coord(i, i));

    for (i = 0; i < 10; i++)
        cout << v[i].x << "," << v[i].y << " ";
    cout << endl;

    for (i = 0; i < v.size(); i++)
        v[i].x = v[i].x * 2;

    for (i = 0; i < 10; i++)
        cout << v[i].x << "," << v[i].y << " ";
    cout << endl;

    return 0;
}
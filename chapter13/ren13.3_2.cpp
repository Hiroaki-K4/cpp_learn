#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


class sample {
    static int i;
public:
    sample() { i++; }
    ~sample() { i--; }
    int getcount() { return i; }
};

int sample::i;

int main()
{
    sample ob1, ob2, ob3;

    cout << ob1.getcount() << "つのオブジェクトが存在する" << endl;

    sample *p;

    try {
        p = new sample;
        if (!p) {
            cout << "メモリ割り当てエラー\n";
            return 1;
        }
    } catch (bad_alloc ba) {
        cout << "メモリ割り当てエラー\n";
        return 1;
    }

    delete p;
    cout << ob1.getcount();
    cout << "つのオブジェクトが存在する\n";

    return 0;
}
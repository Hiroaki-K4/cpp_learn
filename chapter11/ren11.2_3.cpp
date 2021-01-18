#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


template <class Input> class input {
    Input min;
    Input max;
    Input ans;
public:
    input<Input>(char* str, Input a, Input b);
    void show();
};

template <class Input>
input<Input>::input(char* str, Input a, Input b)
{
    Input ch;
    min = a;
    max = b;
    cout << str << endl;
    cin >> ch;
    while (ch < min || ch > max) {
        cin >> ch;
    }
    ans = ch;
}

template <class Input>
void input<Input>::show()
{
    cout << "result: " << ans << endl;
}

int main()
{
    input<int> ob1("入力してください: ", 3, 8);
    ob1.show();
    input<char> ob2("入力してください: ", 'a', 'd');
    ob2.show();
    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;


void Xhandler()
    
}

int main()
{
    cout << "開始\n";

    try { 
        Xhandler(1);
    }

    catch (int i) {
        cout << "intを捕獲" << endl;
    }

    catch (char c) {
        cout << "charを捕獲" << endl;
    }

    catch (double d) {
        cout << "doubleを捕獲" << endl;
    }
    
    cout << "終了" << endl;
    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;

#define SIZE 40

class inventory {
    char item[SIZE];
    int onhand;
    double cost;
public:
    inventory(char *i, int o, double c)
    {
        strcpy(item, i);
        onhand = o;
        cost = c;
    }
    void store(fstream &stream);
    void retrieve(fstream &stream);
    friend ostream &operator<<(ostream &stream, inventory ob);
    friend istream &operator>>(istream &stream, inventory &ob);
};

ostream &operator<<(ostream &stream, inventory ob)
{
    stream << ob.item << ": 在庫数は: " << ob.onhand;
    stream << " 費用は: $" << ob.cost << endl;
    return stream;
}

istream &operator>>(istream &stream, inventory &ob)
{
    stream >> ob.item >> ob.onhand >> ob.cost;
    return stream;
}

void inventory::store(fstream &stream)
{
    stream.write(item, SIZE);
    stream.write((char *) &onhand, sizeof(int));
    stream.write((char *) &cost, sizeof(double));
}

void inventory::retrieve(fstream &stream)
{
    stream.read(item, SIZE);
    stream.read((char *) &onhand, sizeof(int));
    stream.read((char *) &cost, sizeof(double));
}

int main()
{
    fstream inv("inv", ios::out | ios::binary);
    int i;

    inventory pliers("ベンチ", 12, 4.95);
    inventory hammers("金槌", 5, 9.45);
    inventory wrenches("スパナ", 22, 13.90);
    inventory temp("", 0, 0.0);

    if (!inv) {
        cout << "出力ファイルが開けません\n";
        return 1;
    }
    pliers.store(inv);
    hammers.store(inv);
    wrenches.store(inv);
    inv.close();

    inv.open("inv", ios::in | ios::binary);
    if (!inv) {
        cout << "入力ファイルが開けません\n";
        return 1;
    }
    do {
        cout << "Record # (-1 to quit): ";
        cin >> i;
        if (i == -1) break;
        inv.seekg(i*(SIZE + sizeof(int) + sizeof(double)), ios::beg);
        temp.retrieve(inv);
        cout << temp;
    } while (inv.good());
    inv.close();
    return 0;
}
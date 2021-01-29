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
using namespace std;


class Project {
public:
    char name[40];
    int days_to_completion;
    Project() {
        strcpy(name, "");
        days_to_completion = 0;
    }
    Project(char *n, int d) {
        strcpy(name, n);
        days_to_completion = d;
    }
    
    void add_days(int i) {
        days_to_completion += i;
    }

    void sub_days(int i) {
        days_to_completion -= i;
    }

    bool completed() { return !days_to_completion; }

    void report() {
        cout << name << ": ";
        cout << days_to_completion;
        cout << "日(残り)\n";
    }
};

int main()
{
    list<Project> proj, proj2;

    proj.push_back(Project("コンパイラ", 35));
    proj.push_back(Project("スプレッドシート", 190));
    proj.push_back(Project("STL実装", 1000));
    proj2.push_back(Project("データベース", 780));
    proj2.push_back(Project("メールマージ", 50));
    proj2.push_back(Project("COMオブジェクト", 300));

    proj.sort();
    proj2.sort();
    proj.merge(proj2);

    list<Project>::iterator p = proj.begin();

    while (p != proj.end()) {
        p->report();
        p++;
    }

    // p = proj.begin();
    // p->add_days(10);

    // do {
    //     p->sub_days(5);
    //     p->report();
    // } while (!p->completed());

    return 0;
}
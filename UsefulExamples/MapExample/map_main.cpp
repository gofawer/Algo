#include <iostream>
#include <random>
#include <string>
#include <map>
using namespace std;

int main()
{
    random_device rd;
    map<int, int> hist;
    uniform_int_distribution<int> dist(0, 9);

    for (int n = 0; n < 20000; ++n) {
        ++hist[dist(rd)];   // demo only .... mt19937
    }

    for (auto p : hist) {
        cout << p.first << " : " << string(p.second/100, '*') << "\n";
    }

    return 0;
}


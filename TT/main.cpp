#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    vector<int> tt(1000, 9);
    cout << tt.at(0) << endl;
    return 0;
}


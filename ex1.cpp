#include <iostream>
using namespace std;

class A {
public:
    static constexpr int c1 = 34;
    static const int c2 = 35;
    enum { c3 = 19 };
};

int main()
{
    cout << "Single " << endl;
    A a;
    cout << a.c1 << a.c2 << a.c3 << endl;
    return 0;
}

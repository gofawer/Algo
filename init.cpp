#include <iostream>
using namespace std;

class PTString {
public:
    PTString() : name("Pawel")
    {}
    void show() {
        cout << name << endl;
    }

private:
    const char* name;
};

int main()
{
    PTString ss;
    ss.show();
    int* pt = nullptr;
    PTStrin* sptr = nullptr;

    long double ld = 3.1415;
    int a(ld), b = ld; // truncated
    cout << a << endl;
//    int c{ld}, d = {ld}; // error: truncate is not allowed

    return 0;
}

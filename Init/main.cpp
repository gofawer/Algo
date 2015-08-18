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

void ex2_18__24()
{
    int* pt = nullptr;
    PTString* sptr = nullptr;

    long double ld = 3.1415;
    int a(ld), b = ld; // truncated
    cout << a << endl;
//    int c{ld}, d = {ld}; // error: truncate is not allowed


    // ex 2.18
    int val = 45, val2 = 48;
    int* pi = &val;
    cout << "value of a pointer: " << pi << endl;
    pi = &val2;
    cout << "value of a pointer: " << pi << endl;
    *pi = 56;
    cout << "value to which the pointer points: " << *pi << endl;

    // ex 2.19
    // pointer vs references ...

}

int main()
{
    PTString ss;
    ex2_18__24();


    return 0;
}

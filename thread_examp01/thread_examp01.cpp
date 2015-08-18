#include <iostream>
#include <thread>
using namespace std;

void f1(int n = 0)
{
    cout << "in F1 " << n << "\n" << endl;
}

int main()
{
    int n = 0;
    thread t1;
    thread t2(f1, n+1);
    return 0;
}


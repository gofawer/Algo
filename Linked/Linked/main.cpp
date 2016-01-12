#include <iostream>
#include <thread>
using namespace std;

class DisplayThread
{
public:
    void operator()() {
        cout << " display from function OBJECT id: " << this_thread::get_id() << endl;
    }
};

void fun_for_thread()
{
    cout << "display from FUNCTION" << endl;
}

int main()
{
    thread th_fun(fun_for_thread);
    thread th_fun_object((DisplayThread()));

    cout << "MAIN thread " << endl;
    th_fun.join();
    th_fun_object.join();

    cout << "ID of fun thread: " << th_fun.get_id() << endl;

    return 0;
}
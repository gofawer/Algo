#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

class DisplayThread
{
public:
    void operator()() {
        cout << "display from function OBJECT" << endl;
    }
};

void thread_func()
{
    cout << "thread FUNCTION execution id: " << this_thread::get_id() <<  endl;
}

void first()
{
    cout << " in first " << endl;
    this_thread::sleep_for(chrono::seconds(1));
}

void second()
{
    cout << " in second " << endl;
    this_thread::sleep_for(chrono::seconds(1));
}

int main()
{
    {
        cout << " starting first helper " << endl;
        thread helper1( first );
        cout << " starting second helper " << endl;
        thread helper2( second );

        cout << " waiting for helpers .... \n";
        helper1.join();
        helper2.join();
        cout << " done \n";
    }

    cout << " starting threads " << endl;
    thread th_fun( thread_func );
    thread th_fun_obj( (DisplayThread()) );
    thread th_lambda([] {
        cout << "display from LAMBDA" << endl;
    });

    cout << "ID fun th: " << th_fun.get_id() << endl;
    cout << "ID obj th: " << th_fun_obj.get_id() << endl;
    cout << "ID lambda th: " << th_lambda.get_id() << endl;

    cout << "display from MAIN thread " << endl;

    th_fun.join();
    th_fun_obj.join();
    th_lambda.join();

    cout << "EXIT main thread " << endl;

    return 0;
}


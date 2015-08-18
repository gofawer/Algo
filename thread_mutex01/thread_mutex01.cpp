#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <map>
using namespace std;

map<string, string> g_pages;
mutex g_pages_mutex;

void save_page(const string& url)
{
    this_thread::sleep_for(chrono::seconds(2));
    string resutl = "fake content";
}

int main()
{
    thread t1(save_page, "http://one");
    thread t2(save_page, "http://tow");

    return 0;
}


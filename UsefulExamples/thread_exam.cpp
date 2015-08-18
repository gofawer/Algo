#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <mutex>
#include <map>
using namespace std;

map<string, string> g_pages;
mutex g_pages_mutex;

void save_pages(const string& url)
{
	// simulate a long page fetch 
	this_thread::sleep_for(chrono::seconds(2));
}

int main()
{
	return 0;
}

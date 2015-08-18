#include <iostream>
using namespace std;

template<class T>
class UnorderedArray {
public:
	UnorderedArray(int size, int growBy = 1) : 
		array(NULL), maxSize(0), growSize(0), numElements(0)
	{}

private:
	T *array;
	int maxSize;
	int growSize;
	int numElements;
};

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

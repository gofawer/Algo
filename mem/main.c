#include <stdio.h>
#include <stdlib.h>

#define bufSize 12

int fun()
{
    int* m = malloc(bufSize * sizeof(int));
    m[0] = 0;
    free(m);
    return 0;
}

int main()
{
    printf("mem\n");
    fun();
    return 0;
}


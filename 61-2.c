#include <stdio.h>

int *ten()
{
    int num1 = 10;
    return &num1;
}

int main()
{
    int *numPtr;
    numPtr = ten();
    printf("%d\n", *numPtr);
    return 0;
}


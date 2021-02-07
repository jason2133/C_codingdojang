#include <stdio.h>

int *ten()
{
    int *numPtr = malloc(sizeof(int));
    *numPtr = 10;
    return numPtr;
}

int main()
{
    int *numPtr;
    numPtr = ten();
    printf("%d\n", *numPtr);
    free(numPtr);

    return 0;
}


#include <stdio.h>

int main()
{
    int *numPtr;

    numPtr = malloc(sizeof(int));

    *numPtr = 10;

    printf("%d\n", *numPtr);

    free(numPtr);

    return 0;
}


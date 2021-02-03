#include <stdio.h>

int main()
{
    int numArr[3][4] = {
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };
    
    int(*numPtr)[4] = numArr;

    printf("%p\n", *numPtr);
    printf("%p\n", *numArr);
    printf("%p\n", numPtr[2][1]);
    printf("%p\n", sizeof(numArr));
    printf("%p\n", sizeof(numPtr));

    return 0;
}

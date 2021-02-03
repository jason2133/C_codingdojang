#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

    int *numPtr = numArr;

    printf("%d\n", *numPtr);
    printf("%d\n", *numArr);
    // 배열의 첫번째 요소의 값이 출력된다.

    printf("%d\n", numPtr[5]);

    printf("%d\n", sizeof(numArr));
    printf("%d\n", sizeof(numPtr));

    return 0;
}


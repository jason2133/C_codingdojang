#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = ++num1;
    // num1 += 1;
    // num3 = num1;

    num4 = --num2;
    // num2 -= 1;
    // num4 = num2;

    printf("%d %d", num3, num4);

    return 0;
}



#include <stdio.h>

int main()
{
    char num1 = 128;
    // 최댓값 127
    // 그래서 출력은 -128

    unsigned char num2 = 256;
    // 최댓값 255
    // 그래서 출력은 0

    printf("%d %u \n", num1, num2);

    return 0;
}


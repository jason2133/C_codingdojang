#include <stdio.h>

int main()
{
    int num1;
    scanf("%d", &num1);
    printf("%d %d %d %d %d", num1 % 10, (num1 % 100) / 10, (num1 % 1000) / 100, (num1 % 10000) / 1000, num1 / 10000);

    return 0;
}

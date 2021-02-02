#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    switch (num1)
    {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        default:
            printf("default");
            break;
    }

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char c1;

    scanf("%c", &c1);

    switch (c1)
    {
        case 'a':
            printf("A");
            break;
        case 'b':
            printf("B");
            break;
        default:
            printf("default");
            break;
    }

    return 0;
}

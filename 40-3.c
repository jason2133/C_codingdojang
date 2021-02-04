#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[10];
    char s2[10];

    printf("Write Two Words ");
    scanf("%s %s", s1, s2);

    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}

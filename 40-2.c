#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s1 = malloc(sizeof(char) * 10);

    printf("Write your name: ");
    scanf("%s", s1);

    printf("%s\n", s1);

    free(s1);

    return 0;
}

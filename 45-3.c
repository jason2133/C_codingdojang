#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "2019-05-25T10:11:12";
    char *ptr = strtok(s1, "-T:");

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, "-T:");
    }

    return 0;
}

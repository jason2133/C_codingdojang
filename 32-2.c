#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int gender;
    int age;
    bool isOwner;

    scanf("%d %d %d", &gender, &age, &isOwner);

    printf("Hello\n");
    printf("Open the Door\n");

    if (gender == 2)
        goto EXIT;

    if (age < 30)
        goto EXIT;
    
    if (isOwner == false)
        goto EXIT;

EXIT:
    printf("Bye\n");
    printf("Close the Door\n");
    
    return 0;
}


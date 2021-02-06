#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main()
{
    struct Person p1;

    strcpy(p1.name, "Hong");
    p1.age = 30;
    strcpy(p1.address, "Seoul");

    printf("Name : %s\n", p1.name);
    printf("Age : %s\n", p1.age);
    printf("Address : %s\n", p1.address);

    return 0;
}


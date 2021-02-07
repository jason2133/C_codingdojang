#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

struct Person *allocPerson()
{
    struct Person *p = malloc(sizeof(struct Person));

    strcpy(p->name, "Jason");
    p->age = 24;
    strcpy(p->address, "Seoul, Korea");

    return p;
}

int main()
{
    struct Person *p1;

    p1 = allocPerson();

    printf("Name : %s\n", p1->name);
    printf("Age : %s\n", p1->age);
    printf("Address : %s\n", p1->address);

    free(p1);
    
    return 0;
}


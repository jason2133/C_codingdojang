#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
    char name[20];
    int age;
    char univ[100];
};

int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));

    strcpy(p1 -> name, "Jason");
    p1 -> age = 24;
    strcpy(p1 -> univ, "Korea University");

    printf("Name: %s\n", p1->name);
    printf("Age: %s\n", p1->age);
    printf("Univ: %s\n", p1->univ);

    free(p1);

    return 0;
}


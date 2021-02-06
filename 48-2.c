#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct _Person {
    char name[20];
    int age;
    char univ[100];
} Person;

int main()
{
    Person p1;

    strcpy(p1.name, "Jason");
    p1.age = 24;
    strcpy(p1.univ, "Korea University");

    printf("Name : %s\n", p1.name);
    printf("Age : %s\n", p1.age);
    printf("Univ : %s\n", p1.univ);

    return 0;
}


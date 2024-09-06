// Q 9 WAP to show difference between Structure and Union. 


#include <stdio.h>

struct Person 
{
    char name[50];
    int age;
    float height;
};

union Data 
{
    int integer;
    float floating;
    char character;
};

void main() 
{
    struct Person person;
    
    snprintf(person.name, sizeof(person.name), "Ana");
    person.age = 26;
    person.height = 5.7;


    union Data data;
    data.integer = 100;

    printf("Structure:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.2f\n", person.height);

    printf("\nUnion (after setting integer):\n");
    printf("Integer: %d\n", data.integer);

    data.floating = 13.6;

    printf("\nUnion (after setting floating):\n");
    printf("Floating: %.2f\n", data.floating);


    data.character = 'j';

    printf("\nUnion (after setting character):\n");
    printf("Character: %c\n", data.character);
}

//Q.15 Convert school’s name in abbreviated form


#include <stdio.h>


void  main() 
{
    char schoolName[100];
    int i = 0;

    
    printf("Enter the school's name: ");
    gets(schoolName);  


    printf("Abbreviated form: ");

    
    if (schoolName[0] != ' ') {
        printf("%c", toupper(schoolName[0]));
    }


    while (schoolName[i] != '\0') {
        if (schoolName[i] == ' ' && schoolName[i + 1] != ' ' && schoolName[i + 1] != '\0') {
            printf("%c", toupper(schoolName[i + 1]));  
        }
        i++;
    }

    printf("\n");

}

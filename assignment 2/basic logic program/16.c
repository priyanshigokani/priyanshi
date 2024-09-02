// Q.16 .Convert country’s name in abbreviate form

#include <stdio.h>


void  main() 
{
    char country_name[100];
    int i = 0;

    
    printf("Enter the country's name: ");
    gets(country_name);  


    printf("Abbreviated form: ");

    
    if (country_name[0] != ' ') {
        printf("%c", toupper(country_name[0]));
    }


    while (country_name[i] != '\0') {
        if (country_name[i] == ' ' && country_name[i + 1] != ' ' && country_name[i + 1] != '\0') {
            printf("%c", toupper(country_name[i + 1]));  
        }
        i++;
    }

    printf("\n");

}

//Q.11.Accept 5 names from user at run time.

#include <stdio.h>

void main()
 {
    char names[5][50];   

     for (int i = 0; i < 5; i++) 
    {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);  
    }
}

// 1
// 23
// 456
// 78910
// 1112131415

#include <stdio.h>

void main()
{
    int num = 1;  
    int rows = 5; 

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= i; j++)
        {     
            printf("%d", num);
            num++;  
        }
        printf("\n");  
    }

}

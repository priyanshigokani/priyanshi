//Q.5 WAP to print factorial of given number


 #include <stdio.h>

 void  main() 
{
     int n, i;
     unsigned long long factorial = 1;

     
     printf("Enter value of n: ");
     scanf("%d", &n);

     
     if (n < 0)
     {
         printf("Error! Factorial of a negative number doesn't exist.\n");
     }
     else 
     {
         for (i = 1; i <= n; ++i)
         {
             factorial *= i;
         }
        printf("Factorial of %d = %llu\n", n, factorial);
     }
 }

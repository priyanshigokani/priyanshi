 //Q.13.calculate the Factorial of a Given Number using while loop 
 
 #include<stdio.h>

  void  main() 
 {
      int n,factorial = 1;

     
      printf("Enter value of n: ");
      scanf("%d", &n);

      int i= n;
          while(i > 0)
          {
              factorial *= i;
              i--;
          }
         printf("Factorial of %d = %d\n", n, factorial);
     
     
  }
 


// Q.15 Calculate sum of 10 numbers using of while loop
 
 #include <stdio.h>

 void main()
  {
     int i=0,numbers,sum=0;

     while(i <10)
 {
     printf("enter the numbers %d: ",i + 1);
     scanf("%d",&numbers);
      sum+= numbers;
      i++;
 }
      printf("the total sum of 10 numbers are: %d",sum);
 }


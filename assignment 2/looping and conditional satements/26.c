// Q 26 . (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)  
 
 
 #include <stdio.h>

 void main() {
     int n, sum = 0;

     printf("Enter a positive integer: ");
     scanf("%d", &n);

     for (int i = 1; i <= n; ++i)
     {
        int SSum=0;
         for(int j=1; j<=i; ++j)
         {
             SSum+=j;
         }
         sum+= SSum;
     }

     printf("The total sum is: %d\n",sum);
 }
// #include <stdio.h>

// int main() {
//     int n;
//     int totalSum = 0;

//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     // Iterate over each sequence from 1 to n
//     for (int i = 1; i <= n; ++i) {
//         int sequenceSum = 0;
        
//         // Compute the sum of numbers from 1 to i
//         for (int j = 1; j <= i; ++j) {
//             sequenceSum += j;
//         }

//         // Add the current sequence sum to the total sum
//         totalSum += sequenceSum;
//     }

//     printf("The total sum is: %d\n", totalSum);

//     return 0;
// }

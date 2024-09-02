// #include<stdio.h>

// void main()
// {
//   float b,h,area;

//   printf("enter the value of b: ");
//   scanf("%f",&b);

//   printf("enter the value of h: ");
//   scanf("%f",&h);

//   area=1/2*b*h;
//   //printf("The area of triangle is: %.2f\n", area);
//   printf("The area of the triangle is: %.2f\n", area);
//   //printf("%f*%d*%d=%f",area);
// }
 #include <stdio.h>

 int main() {
     int b, h, area;

      //Get the base and height of the triangle from the user
     printf("Enter the value of b: ");
     scanf("%f", &b);

     printf("Enter the value of h: ");
     scanf("%f", &h);

      //Calculate the area of the triangle
     area = 0.5 * b* h;

      //Display the result
     printf("The area of the triangle is: %.2f\n", area);

    
 }

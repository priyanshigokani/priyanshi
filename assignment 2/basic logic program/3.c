// Q.3 WAP to Find Area And Circumference of Circle


#include <stdio.h>

void  main() 
{
    int radius;
    float PI = 3.14, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("The Area of the circle is: %.6f\n", area);
    printf("The Circumference of the circle is: %.6f\n", circumference);


}

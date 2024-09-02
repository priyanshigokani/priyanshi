//Q.10 find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>

void main()
{
    int l,h,w,area;
    
    printf("enter the value of l: ");
    scanf("%d",&l);

    printf("enter the value of h: ");
    scanf("%d",&h);

    printf("enter the value of w: ");
    scanf("%d",&w);

    area=2*(w*l+h*l+h*w);

    printf("the area of a rectangular is: %d\n",area);

}
// Write a C program to determine eligibility for admission to a professional
// course based on the following criteria
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
// in Chem>=50 and Total in all three subject >=190 or Total in Maths and
// Physics >=140 --------------------------------------Input the marks obtained in
// Physics :65 Input the marks obtained in Chemistry :51 Input the marks
// obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
// 188 Total marks of Maths and Physics : 137 The candidate is not eligible.


#include<stdio.h>

void main()
{
    int marks,maths,phy,chem,total;

    printf("enter the marks of maths: ");
    scanf("%d",&maths);

    printf("enter the marks of phy: ");
    scanf("%d",&phy);

    printf("enter the marks of chem: ");
    scanf("%d",&chem);
    
    
    marks=maths+phy+chem;
    printf("total marks are: %d\n",marks);

    total=maths+phy;
    printf("total marks are: %d\n",total);



    if(maths>=65 && phy>=55 && chem>=50 && marks>=190 || total>=137)
    {
       
        
        printf("\nperson is eligible for admission");
        
    }
    
    else
    {
        printf("\nperson is not eligible for admission");
    }
}
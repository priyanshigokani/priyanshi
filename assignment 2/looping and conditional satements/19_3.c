    //     *
    //    ***
    //   *****
    //  *******
    // *********
    #include <stdio.h>

void main()
{ 

    int counter = 1;
    for (int i = 1; i <= 10; i += 2)
    {
        for (int k = 4; k >=counter; k--)
        {
            printf(" ");
        }
        counter++;

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
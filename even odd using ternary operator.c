#include <stdio.h>

int main() {
    int num;

    // Input a number from the user
    printf("Enter the number: ");
    scanf("%d", &num);

    // Check if the number is even or odd using the ternary operator
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}

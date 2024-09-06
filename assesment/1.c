// It should be a menu driven approach, for which you are suppose to use the functions concept  
// Over Here, take string input from user and perform string operations listed below :  
// ● reverse a string 
// ● Concatenation  
// ● Palindrome 
// ● Copy  a string  
// ● Length of the string  
// ● Frequency of character in s string  
// ● Find number of vowels and consonants  
// ● Find number of blank spaces and digits  
// As given above perform the operation as per user’s choice  
// If user will not select any of the above then it should not perform any operation and  
// give an appropriate user friendly message  
// After performing the operation ask the user if the user wants to continue or not ?


#include <stdio.h>
#include <string.h>

void reverseString(char str[]);
void concatenateStrings(char str1[], char str2[]);
void checkPalindrome(char str[]);
void copyString(char source[], char destination[]);
int stringLength(char str[]);
void characterFrequency(char str[], char ch);
void countVowelsConsonants(char str[]);
void countSpacesDigits(char str[]);
char toLowerCase(char ch);
int isAlphabet(char ch);
int isVowel(char ch);
int isSpace(char ch);
int isDigit(char ch);

void main() 
{
    char str[100], str2[100], ch;
    int choice;
    char continueChoice;

    do 
    {
        printf("welcome\n");
        printf("string operation menu\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenation\n");
        printf("3. Palindrome check\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of a character in a string\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Count blank spaces and digits\n");
       
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter a string: ");
                scanf(" %s", str);
                reverseString(str);
                printf("Reversed String: %s\n", str);
                break;

            case 2:
                printf("Enter first string: ");
                scanf(" %s", str);
                printf("Enter second string: ");
                scanf(" %s", str2);
                concatenateStrings(str, str2);
                printf("Concatenated String: %s\n", str);
                break;

            case 3:
                printf("Enter a string: ");
                scanf(" %s", str);
                checkPalindrome(str);
                break;

            case 4:
                printf("Enter a string to copy: ");
                scanf(" %s", str);
                copyString(str, str2);
                printf("Copied String: %s\n", str2);
                break;

            case 5:
                printf("Enter a string: ");
                scanf(" %s", str);
                printf("Length of the string: %d\n", stringLength(str));
                break;

            case 6:
                printf("Enter a string: ");
                scanf(" %s", str);
                printf("Enter the character to find its frequency: ");
                scanf(" %c", &ch);
                characterFrequency(str, ch);
                break;

            case 7:
                printf("Enter a string: ");
                scanf(" %s", str);
                countVowelsConsonants(str);
                break;

            case 8:
                printf("Enter a string: ");
                scanf(" %[^\n]s", str);
                countSpacesDigits(str);
                break;

            default:
                printf("Invalid choice! Please choose a valid option.\n");
                break;
        }

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &continueChoice);
    } 
    while (continueChoice == 'y' || continueChoice == 'Y');

    printf("thanks for exploring the string operations !\n");
}

void reverseString(char str[]) 
{
    strrev(str);
}

void concatenateStrings(char str1[], char str2[]) 
{
    strcat(str1, str2);
}

void checkPalindrome(char str[]) 
{
    int len = strlen(str);
    int isPalindrome = 1;

    for (int i = 0; i < len / 2; i++) 
    {
        if (toLowerCase(str[i]) != toLowerCase(str[len - i - 1])) 
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    
    else
    {
        printf("The string is not a palindrome.\n");
    }
}

void copyString(char source[], char destination[]) 
{
    strcpy(destination, source);
}

int stringLength(char str[]) 
{
    return strlen(str);
}

void characterFrequency(char str[], char ch) 
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (toLowerCase(str[i]) == toLowerCase(ch)) 
        {
            count++;
        }
    }
    printf("The character '%c' appears %d times in the string.\n", ch, count);
}

void countVowelsConsonants(char str[]) 
{
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = toLowerCase(str[i]);
        if (isVowel(ch)) 
        {
            vowels++;
        } 
        
        else if (isAlphabet(ch)) 
        {
            consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

// void countSpacesDigits(char str[]) 
// {
//     int spaces = 0, digits = 0;

//     for (int i = 0; str[i] != '\0'; i++) 
//     {
//         if (isSpace(str[i])) 
//         {
//             spaces++;
//         } 
        
//         else if (isDigit(str[i])) 
//         {
//             digits++;
//         }
//     }
//     printf("Spaces: %d, Digits: %d\n", spaces, digits);
// }

// Function to count blank spaces and digits in a string
void countSpacesDigits(char str[]) {
    int spaces = 0, digits = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {  // Count space characters
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {  // Count digit characters
            digits++;
        }
    }
    printf("Spaces: %d, Digits: %d\n", spaces, digits);
}


char toLowerCase(char ch) 
{
    if (ch >= 'A' && ch <= 'Z') 
    {
        return ch + ('a' - 'A');
    }
    return ch;
}

int isAlphabet(char ch) 
{
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

int isVowel(char ch) 
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int isSpace(char ch) 
{
    return ch == ' ';
}

int isDigit(char ch) 
{
    return ch >= '0' && ch <= '9';
}

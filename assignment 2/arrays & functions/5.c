// Q .5  WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice 


#include <stdio.h>

void sortArray(int arr[], int size, int order) 
{
    int temp;
    
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if ((order == 1 && arr[i] > arr[j]) || (order == 2 && arr[i] < arr[j])) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void inputArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() 
{
    int size1, size2, order;
    
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    inputArray(arr1, size1);
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    inputArray(arr2, size2);
    
   
    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &order);
    
    if(order <= 2)
    {
    sortArray(arr1, size1, order);
    sortArray(arr2, size2, order);
    
    printf("Sorted first array: ");
    printArray(arr1, size1);
    
    printf("Sorted second array: ");
    printArray(arr2, size2);
    }
    else{
        printf("wrong input");
    }
}


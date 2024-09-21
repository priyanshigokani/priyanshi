// Q.2  Write a program of to sort the array using templates 

#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {13, 7, 6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    sortArray(arr, size);

    cout << "After sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

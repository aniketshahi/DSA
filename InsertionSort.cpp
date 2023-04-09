#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{
    int key, j;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {8, 4, 11, 32, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted Array" << endl;
    printArray(arr, n);
    cout << endl
         << endl;
    InsertionSort(arr, n);
    cout << "Sorted array" << endl;
    printArray(arr, n);
    return 0;
    return 0;
}
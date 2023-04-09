#include <iostream>
using namespace std;
// declaring merge function
void Merge(int arr[], int low, int mid, int high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = 0;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++, k++;
        }
        else
            b[k] = arr[j];
        j++, k++;
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        k++, i++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        k++, j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
}
// Function for sorting array
void MergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}
// function for printing array
void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
// main function
int main()
{
    int arr[] = {8, 4, 11, 32, 1};
    int low = arr[0];

    int n = sizeof(arr) / sizeof(arr[0]);
    int high = arr[n - 1];
    cout << "Unsorted Array" << endl;
    printArray(arr, n);
    cout << endl
         << endl;
    MergeSort(arr, low, high);
    cout << "Sorted array" << endl;
    printArray(arr, n);
    return 0;
    return 0;
}
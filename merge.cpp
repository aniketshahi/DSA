#include <iostream>
using namespace std;
void printarr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
void merge(int arr[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++, k++;
        }
        else
            B[k] = arr[j];
        k++, j++;
    }
    while (i <= mid)
    {
        B[k] = arr[i];
        k++, i++;
    }
    while (i <= mid)
    {
        B[k] = arr[j];
        k++, j++;
    }
    for(int i=low; i<=high;i++){
        arr[i]=B[i];
    }
}
void mergesort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}
int main()
{
    int arr[] = {3, 6, 8, 1, 6, 5};
    int size = sizeof(arr) / sizeof(int);
    printarr(arr, size);
    mergesort(arr,0,size);
    printarr(arr, size);

    return 0;
}
#include <iostream>
using namespace std;
int LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n;
    cout << "Enter element which you want to search:";
    cin >> n;
    int size = sizeof(arr) / sizeof(int);
    int searchIndex = LinearSearch(arr, size, n);
    cout << "The element is " << n << " and position is " << searchIndex;

    return 0;
}
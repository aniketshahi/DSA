#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void shellSort(int arr[], int n) 
{ 
    int gap = n/2;
    auto start = high_resolution_clock::now();
    while (gap > 0) 
    { 
        for (int i = gap; i < n; i += 1) 
        { 
            int temp = arr[i]; 
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
                arr[j] = arr[j - gap]; 
            arr[j] = temp; 
        } 
        gap /= 2;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;
} 

int main()
{
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original Array: ";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    shellSort(arr, n);
    cout << "Sorted Array: ";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Space Complexity: " << sizeof(arr) << endl;
    return 0;
}

#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {8, 4, 11, 32, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Unsorted Array" << endl;
    printArray(arr, n);
    
    InsertionSort(arr, n);
    
    cout << "Sorted array" << endl;
    printArray(arr, n);
    
    return 0;
}

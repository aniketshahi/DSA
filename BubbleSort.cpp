#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;  // Optimization: Track if any swaps were made in this pass
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;  // Set swapped to true if a swap occurred
            }
        }
        if (!swapped) {
            // If no swaps were made in this pass, the array is already sorted
            break;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {8, 4, 11, 32, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted Array" << endl;
    printArray(arr, n);
    cout << endl;
    BubbleSort(arr, n);
    cout << "Sorted array" << endl;
    printArray(arr, n);
    return 0;
}

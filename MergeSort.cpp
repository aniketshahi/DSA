#include <iostream>

// Declaring merge function
void Merge(int arr[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int* b = new int[high - low + 1];

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            b[k++] = arr[i++];
        } else {
            b[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        b[k++] = arr[i++];
    }

    while (j <= high) {
        b[k++] = arr[j++];
    }

    for (i = 0; i < k; i++) {
        arr[low + i] = b[i];
    }

    delete[] b;
}

// Function for sorting array
void MergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

// Function for printing array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Main function
int main() {
    int arr[] = {8, 4, 11, 32, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Unsorted Array" << std::endl;
    printArray(arr, n);
    std::cout << std::endl;

    MergeSort(arr, 0, n - 1);

    std::cout << "Sorted array" << std::endl;
    printArray(arr, n);

    return 0;
}

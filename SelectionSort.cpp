// C++ program for implementation of
// selection sort
#include <iostream>
using namespace std;

//Swap function
void swap(int *arr, int *minIndex)
{
	int temp = *arr;
	*arr = *minIndex;
	*minIndex = temp;
}

void selectionSort(int arr[], int n)
{
	int minIndex;

	// One by one move boundary of
	// unsorted subarray
	for (int i = 0; i < n-1; i++)
	{
	
		// Find the minimum element in
		// unsorted array
		minIndex = i;
		for (int j = i+1; j < n; j++)
		if (arr[j] < arr[minIndex])
			minIndex = j;

		// Swap the found minimum element
		// with the first element
		if(minIndex!=i)
			swap(&arr[minIndex], &arr[i]);
	}
}

//Function to print an array
void printArray(int arr[], int size)
{
	
	for (int i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver program to test above functions
int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted Array"<<endl;
	printArray(arr,n);
	cout << endl<<endl;
	selectionSort(arr, n);
	cout << "Sorted array"<<endl;
	printArray(arr, n);
	return 0;
}
// This is code is contributed by rathbhupendra

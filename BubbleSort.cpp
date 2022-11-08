#include <iostream>
using namespace std;

int BubleSort(int arr[],int n){
   int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[], int size)
{
	
	for (int i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{int arr[] = {8, 4, 11, 32, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted Array"<<endl;
	printArray(arr,n);
	cout << endl<<endl;
	BubleSort(arr, n);
	cout << "Sorted array"<<endl;
	printArray(arr, n);
	return 0;
return 0;
}
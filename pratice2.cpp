// // LINEAR SEARCH
// #include <iostream>
// using namespace std;
// int LinearSearch(int arr[],int size,int element){
//    for(int i=0;i<size;i++){
//       if (arr[i]==element){
//          return i;
//       }

//    }
//    return -1;
// }
// int main()
// {
//    int arr[]={9,8,7,6,5,4,3,2,1};
//    int a;
//    cout<<"Enter element you want to search:";
//    cin>>a;
//    int size= sizeof(arr)/sizeof(int);
//    int searchIndex=LinearSearch(arr,size,a);
//    cout<<"The element is: ";
//    cout<<a;
//    cout<<" at index:" ;
//    cout<<searchIndex;
// return 0;
// }

// // BINARY SEARCH
// #include <iostream>
// using namespace std;
// int BinarySearch(int arr[], int size, int element)
// {
//    int low, mid, high;
//    low = 1;
//    high = arr[size - 1];
//    while (low <= high)
//    {
//       mid = (low + high) / 2;
//       if (arr[mid] == element)
//       {
//          return mid;
//       }
//       if (arr[mid] < element)
//       {
//          low = mid + 1;
//       }
//       else
//       {
//          high = mid - 1;
//       }
//    }
//    return -1;
// }

// int main()
// {
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int a;
//    cout << "Enter element you want to search:";
//    cin >> a;
//    int size = sizeof(arr) / sizeof(int);
//    int searchIndex = BinarySearch(arr, size, a);
//    cout << "The element is: ";
//    cout << a;
//    cout << " at index:";
//    cout << searchIndex;

//    return 0;
// }

// Selction Sort
#include <iostream>
using namespace std;
void printArray(int *a, int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << a[i];
      cout << ",";
   }
   cout << endl;
}
void SelectionSort(int *a, int n)
{
   cout << "Running Selection sort... " << endl;
   int minIndex,temp;
   for (int i = 0; i < n - 1; i++)
   {
      minIndex = i;
      for (int j = i+1; j < n ;j++)
      {
         if(a[j]<a[minIndex]){
           minIndex=j;
         }
      }
      temp=a[i];
      a[i]=a[minIndex];
      a[minIndex]=temp;
   }  
}
int main()
{
   int arr[] = {3, 4, 5, 6, 7, 8, 9, 0};
   int n = sizeof(arr) / sizeof(int);
   printArray(arr, n);
   SelectionSort(arr, n);
   printArray(arr,n);
   return 0;
}
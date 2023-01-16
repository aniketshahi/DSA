// #include <iostream>
// using namespace std;
// int linearSearch(int arr[],int size,int element){
//     for(int i=0;i<size;i++){
//         if(arr[i]==element){
//             return i+1;
//         }
//     }
//     return -1;
// }
// int BinarySearch(int arr[], int size, int element)
// {
//     int low, mid, high;
//     low = 0;
//      high = arr[size - 1];
//     while (low <= high)
//   {
//     mid = (low + high) / 2;
//     if (arr[mid] == element)
//     {
//       return mid;
//     }
//     if (arr[mid] < element)
//     {
//       low = mid + 1;
//     }
//     else
//     {
//       high = mid - 1;

//     }
//   }
//   return -1;
// }
// int BinarySearch(int arr[],int size,int element){
//     int low,mid,high;
//     low=0;
//     high=arr[size-1];
//     while(low<=high){
//         mid=(low+high)/2;
//         if(arr[mid]==element){
//             return mid;
//         }
//         if(arr[mid]<element){
//             low=mid+1;
//         }
//         else
//         high=mid-1;
//     }
//     return -1;
// }

// int PrintArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i];
//         cout << ",";
//     }
// }
// int BubbleSort(int *arr,int n){
//     int temp;
//   for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-1-i;j++){
//         if(arr[j]>arr[j+1]){
//             temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//     }
//   }

// }

// void InsertionSort(int *arr, int n)
// {
//     int key, j;
//     for (int i = 0; i < n - 1; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }
// void selectionSort(int *arr,int n){
//    int minIndex,temp;
//     for(int i=0;i<n-1;i++){
//         minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex=j;
//             }
//         }
//         temp=arr[i];
//         arr[i]=arr[minIndex];
//         arr[minIndex]=temp;

//     }

// }

// int main()
// {
//     int arr[] = {7, 5, 3, 2, 1, 6, 4, 9};

//     int size = sizeof(arr) / sizeof(int);
//     int array = PrintArray(arr, size);
//     selectionSort(arr, size);
//     cout << endl;
//     PrintArray(arr, size);
//     cout << array;

//     return 0;
// }
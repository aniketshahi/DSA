#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int element)
{

  int low, mid, high; // declared high mid and low example in array arr[]={1,2,3,4,5,6,7}
  // 1 is low,7 is high and 3 is mid(due to int)
  low = 0;
  high = arr[size - 1]; //
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (arr[mid] == element)
    {
      return mid;
    }
    if (arr[mid] < element)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
        }
  }
  return -1;
}
int main()
{
  int arr[] = {8, 4, 11, 32};
  int n;
  cout << "Enter element to search:";
  cin >> n;
  int size = sizeof(arr) / sizeof(int);
  int searchIndex = BinarySearch(arr, size, n);
  cout << "The element is " << n << " and position is " << searchIndex;

  return 0;
}
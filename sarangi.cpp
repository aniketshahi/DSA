#include <iostream>
using namespace std;
int Linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            
            return i;
        }
    }
    cout << "Key Not Found : " << key << endl;
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array : " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements : " << endl;
        cin >> arr[i];
    }
    
    int key;
    cout << "Enter the key : " << endl;
    cin >> key;

    int index= Linearsearch(arr, n, key);
    cout<<"Element is:";
    cout<<key;
    cout<<" at index: ";
    cout<<index;
    

    return 0;
}
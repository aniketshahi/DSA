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

// // Selction Sort
// #include <iostream>
// using namespace std;
// void printArray(int *a, int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       cout << a[i];
//       cout << ",";
//    }
//    cout << endl;
// }
// void SelectionSort(int *a, int n)
// {
//    cout << "Running Selection sort... " << endl;
//    int minIndex,temp;
//    for (int i = 0; i < n - 1; i++)
//    {
//       minIndex = i;
//       for (int j = i+1; j < n ;j++)
//       {
//          if(a[j]<a[minIndex]){
//            minIndex=j;
//          }
//       }
//       temp=a[i];
//       a[i]=a[minIndex];
//       a[minIndex]=temp;
//    }
// }
// int main()
// {
//    int arr[] = {3, 4, 5, 6, 7, 8, 9, 0};
//    int n = sizeof(arr) / sizeof(int);
//    printArray(arr, n);
//    SelectionSort(arr, n);
//    printArray(arr,n);
//    return 0;
// }

// // Bubble sort
// #include <iostream>
// using namespace std;
// void printArray(int *A, int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       cout << A[i];
//       cout << ",";
//    }
//    cout << endl;
// }

// void BubbleSort(int *A, int n)
// {
//    int temp;
//    cout << "Starting bubble sort..."<<endl;
//    for (int i = 0; i < n - 1; i++)
//    {
//       for (int j = 0; j < n - 1 - i; j++)
//       {
//          if (A[j] > A[j + 1])
//          {
//             temp = A[j];
//             A[j] = A[j + 1];
//             A[j + 1] = temp;
//          }
//       }
//    }
// }
// int main()
// {
//    int arr[] = {3, 4, 5, 6, 7, 8, 9, 0};
//    int n = sizeof(arr) / sizeof(int);
//    printArray(arr, n);
//    BubbleSort(arr, n);
//    printArray(arr, n);

//    return 0;
// }

// Insertion sort
// #include <iostream>
// using namespace std;
// void printArray(int *a, int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       cout << a[i];
//       cout << ",";
//    }
//    cout << endl;
//}
// void InsertionSort(int *A,int n){
//    int key,j;
//    cout<<"Starting insertion sort..."<<endl;
//    for(int i=1;i<n;i++){
//       key=A[i];
//       j=i-1;
//       while(j>=0 && A[j]>key){
//          A[j+1]=A[j];
//          j--;

//       }
//       A[j+1]=key;
//    }
// }
// void mergesort(int A[], int B[], int C[], int m, int n)
// {
//    int i, j, k;
//    i = j = k = 0;
//    while (i < m && j < n)
//    {
//       if (A[i] < B[j])
//       {
//          C[k] = A[i];
//          i++, k++;
//       }
//       else
//          C[k] = B[i];
//       j++, k++;
//    }
//    while (i < m)
//    {
//       C[k] = A[i];
//       i++, k++;
//    }
//    while (j < n)
//    {
//       C[k] = B[j];
//       j++, k++;
//    }
// }
// int main()
// {
//    int arr[] = {8, 4, 11, 32, 1};
//    int n = sizeof(arr) / sizeof(int);
//    printArray(arr, n);
//    mergesort(arr, n);
//    printArray(arr, n);

//    return 0;
// }

// linked list

// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertAthead(node *&head, int d)
// {
//     node *temp = new node(d);
//     temp->next = head;
//     head = temp;
// }
// void printNode(node *&head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     node *node1 = new node(10);
//     // cout << node1->data << endl;
//     // cout << node1->next << endl;
//     node *head = node1;
//     printNode(head);
//     insertAthead(head, 12);
//     printNode(head);

//     return 0;
// }

// Stack

// #include <iostream>
// using namespace std;
// class stack
// {
// private:
//     int top;
//     int arr[5];

// public:
//     stack()
//     {
//         top = -1;
//         for (int i = 0; i < 5; i++)
//         {
//             arr[i] = 0;
//         }
//     }
//     bool isEmpty()
//     {
//         if (top == -1)
//             return true;
//         else
//             return false;
//     }
//     bool isFull()
//     {
//         if (top == 4)
//             return true;
//         else
//             return false;
//     }
//     void push(int val)
//     {
//         if (isFull())
//         {
//             cout << "Stack is overflow";
//         }
//         else
//             top++;
//         arr[top] = val;
//     }
//     int pop()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is underflow";
//             return 0;
//         }
//         else
//         {
//             int popvalue = arr[top];
//             arr[top] = 0;
//             top--;
//             return popvalue;
//         }
//     }
// };
// int main()
// {

//     return 0;
// }

// binary search tree

#include <iostream>
using namespace std;
class treenode
{
public:
    int value;
    treenode *left;
    treenode *right;

    treenode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }
    treenode(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};
class BST
{
public:
    treenode *root;

    bool isEmpty()
    {
        if (root == NULL)
            return true;
        else
            return false;
    }
    void insertNode(){

    }
};
int main()
{
    

    return 0;
}
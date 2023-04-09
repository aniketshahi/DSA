#include <iostream>
using namespace std;

class recursion
{
public:
    int factorial(int n)
    {
        if (n == 0)
            return 1;
        return n * factorial(n - 1);
    }
    int fibonacci(int n)
    {
        if (n == 0 || n == 1)
            return n;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    int power(int x, int n)
    {
        if (n == 0)
            return 1;
        return x * power(x, n - 1);
    }
    int powerlog(int x, int n)
    {
        if (n == 0)
            return 1;
        int temp = powerlog(x, n / 2);
        temp *= temp;
        if (n % 2 == 0)
            return temp;
        else
            return x * temp;
    }
    void towerofhanoi(int n, char src, char dest, char helper)
    {
        if (n == 0)
            return;
        towerofhanoi(n - 1, src, helper, dest);
        cout << "Move from " << src << " to " << dest << endl;
        towerofhanoi(n - 1, helper, dest, src);
    }
    void printincreasing(int n)
    {
        if (n == 0)
            return;
        printincreasing(n - 1);
        cout << n << endl;
    }
    void printdecreasing(int n)
    {
        if (n == 0)
            return;
        cout << n << endl;
        printdecreasing(n - 1);
    }
    void printincreasingdecreasing(int n)
    {
        if (n == 0)
            return;
        cout << n << endl;
        printincreasingdecreasing(n - 1);
        cout << n << endl;
    }
    void printodddecreasingevenincreasing(int n)
    {
        if (n == 0)
            return;
        if (n % 2 != 0)
            cout << n << endl;
        printodddecreasingevenincreasing(n - 1);
        if (n % 2 == 0)
            cout << n << endl;
    }
    void printarray(int arr[], int n)
    {
        if (n == 0)
            return;
        printarray(arr, n - 1);
        cout << arr[n - 1] << endl;
    }
    void printarrayreverse(int arr[], int n)
    {
        if (n == 0)
            return;
        cout << arr[n - 1] << endl;
        printarrayreverse(arr, n - 1);
    }
    int maxarray(int arr[], int n)
    {
        if (n == 1)
            return arr[0];
        return max(arr[n - 1], maxarray(arr, n - 1));
    }
    int firstindex(int arr[], int n, int x)
    {
        if (n == 0)
            return -1;
        if (arr[0] == x)
            return 0;
        int index = firstindex(arr + 1, n - 1, x);
        if (index == -1)
            return -1;
        else
            return index + 1;
    }
    int lastindex(int arr[], int n, int x)
    {
        if (n == 0)
            return -1;
        int index = lastindex(arr + 1, n - 1, x);
        if (index == -1)
        {
            if (arr[0] == x)
                return 0;
            else
                return -1;
        }
        else
            return index + 1;
    }
    bool isarraysorted(int arr[], int n)
    {
        if (n == 1)
            return true;
        if (arr[0] > arr[1])
            return false;
        bool restarray = isarraysorted(arr + 1, n - 1);
        return restarray;
    }
    void allindices(int arr[], int n, int x, int i, int output[], int &j)
    {
        if (i == n)
            return;
        if (arr[i] == x)
        {
            output[j] = i;
            j++;
        }
        allindices(arr, n, x, i + 1, output, j);
    }
    void printallindices(int arr[], int n, int x)
    {
        int output[100];
        int j = 0;
        allindices(arr, n, x, 0, output, j);
        for (int i = 0; i < j; i++)
            cout << output[i] << endl;
    }
    void replacepi(char a[])
    {
        if (a[0] == '\0' || a[1] == '\0')
            return;
        replacepi(a + 1);
        if (a[0] == 'p' && a[1] == 'i')
        {
            int i = 2;
            while (a[i] != '\0')
                i++;
            while (i >= 2)
            {
                a[i + 2] = a[i];
                i--;
            }
            a[0] = '3';
            a[1] = '.';
            a[2] = '1';
            a[3] = '4';
        }
    }
    void removeX(char a[])
    {
        if (a[0] == '\0')
            return;
        removeX(a + 1);
        if (a[0] == 'x')
        {
            int i = 1;
            while (a[i] != '\0')
            {
                a[i - 1] = a[i];
                i++;
            }
            a[i - 1] = a[i];
        }
    }
    void removeconsecutive(char a[])
    {
        if (a[0] == '\0')
            return;
        removeconsecutive(a + 1);
        if (a[0] == a[1])
        {
            int i = 1;
            while (a[i] != '\0')
            {
                a[i - 1] = a[i];
                i++;
            }
            a[i - 1] = a[i];
        }
    }
    void movex(char a[])
    {
        if (a[0] == '\0')
            return;
        movex(a + 1);
        if (a[0] == 'x')
        {
            int i = 1;
            while (a[i] != '\0')
                i++;
            while (i >= 1)
            {
                a[i] = a[i - 1];
                i--;
            }
            a[0] = 'x';
        }
    }
    void replacepi(char a[])
    {
        if (a[0] == '\0' || a[1] == '\0')
            return;
        replacepi(a + 1);
        if (a[0] == 'p' && a[1] == 'i')
        {
            int i = 2;
            while (a[i] != '\0')
                i++;
            while (i >= 2)
            {
                a[i + 2] = a[i];
                i--;
            }
            a[0] = '3';
            a[1] = '.';
            a[2] = '1';
            a[3] = '4';
        }
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;
    int output[100];
    int j = 0;
    allindices(arr, n, x, 0, output, j);
    for (int i = 0; i < j; i++)
        cout << output[i] << endl;
    return 0;
}

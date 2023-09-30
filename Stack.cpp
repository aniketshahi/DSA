#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == 4;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return 0;
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    int count()
    {
        return top + 1;
    }

    int peek(int pos)
    {
        if (isEmpty() || pos < 0 || pos > top)
        {
            cout << "Invalid position or stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[pos];
        }
    }

    void change(int pos, int val)
    {
        if (isEmpty() || pos < 0 || pos > top)
        {
            cout << "Invalid position or stack is empty" << endl;
        }
        else
        {
            arr[pos] = val;
            cout << "Value changed at location " << pos << endl;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "All values in the stack are:" << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }
    }
};

int main()
{
    Stack s1;
    int option, value;

    do
    {
        cout << "What operation do you want to perform? Select option number or Enter 0 to exit" << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. Peek()" << endl;
        cout << "6. Count()" << endl;
        cout << "7. Change()" << endl;
        cout << "8. Display()" << endl;
        cout << "9. Clear Screen" << endl;

        cin >> option;
        cin.ignore(); // Clear input buffer

        switch (option)
        {
        case 1:
            cout << "Enter an item to push in the stack: ";
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "Pop Function Called - Popped value: " << s1.pop() << endl;
            break;
        case 3:
            if (s1.isEmpty())
            {
                cout << "Stack is empty" << endl;
            }
            else
            {
                cout << "Stack is not empty" << endl;
            }
            break;
        case 4:
            if (s1.isFull())
            {
                cout << "Stack is full" << endl;
            }
            else
            {
                cout << "Stack is not full" << endl;
            }
            break;
        case 5:
            cout << "Enter the position to peek: ";
            int pos;
            cin >> pos;
            cout << "Value at position " << pos << ": " << s1.peek(pos) << endl;
            break;
        case 6:
            cout << "Stack size: " << s1.count() << endl;
            break;
        case 7:
            cout << "Enter the position to change: ";
            int changePos, newValue;
            cin >> changePos;
            cout << "Enter the new value: ";
            cin >> newValue;
            s1.change(changePos, newValue);
            break;
        case 8:
            s1.display();
            break;
        case 9:
            system("clear"); // Use "cls" for Windows
            break;
        default:
            break;
        }

    } while (option != 0);

    return 0;
}

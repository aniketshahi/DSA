#include <iostream>
using namespace std;
class stack
{
    int top;
    int arr[5];

public:
    stack()
    {
        top = -1; // declaring position below stack
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    // Checking Empty instruction
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
    // Ckecking full instruction
    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
            return false;
    }
    // Pushing value in stack instruction
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
    // Removing value from stack instruction
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return 0;
        }
        else
            int popvalue;
           int  popvalue = arr[top];
        arr[top] = 0;
        top--;
        return popvalue;
    }
    // Counting stack size instruction
    int count()
    {
        return (top + 1);
    }
    // Cheking position instruction
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }
    // Changing value instruction
    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "Value changed at location" << pos << endl;
    }
    // Showing value instruction
    int display()
    {
        cout << "All values in the stack are:" << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    stack s1;
    int option, position, value;
    do
    {
       cout<<"What operation do you want to perform? Select option number or Enter 0 to exit"<<endl;
       cout<<"1. Push()"<<endl;
       cout<<"2  Pop()"<<endl;
       cout<<"3. isEmpty()"<<endl;
       cout<<"4. isFull()"<<endl;
       cout<<"5. Peek()"<<endl;
       cout<<"6. Count()"<<endl;
       cout<<"7. Change()"<<endl;
       cout<<"8. Display()"<<endl;
       cout<<"9. Clear Screen"<<endl;
       cin>>option;
       switch (option)
       {
       case 1 :
           cout<<"Enter an item to push in the stack"<<endl;
           cin>>value;
           s1.push(value);
           break;
        case 2 :
           cout<<"Pop Function Called- Poped value "<<s1.pop()<<endl;
           break;
         case 3 :
          if(s1.isEmpty()){
            cout<<"Stack is empty"<<endl;
          }
          else 
          cout<<"Stack is not empty";
           break;
        
       default:
        break;
       }
    } while (option != 1);
    return 0;
}
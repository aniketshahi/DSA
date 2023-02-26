#include<iostream>
using namespace std;

const int MAX_STACK = 5;

class Stack
{
  private:
    int top;
    int items[MAX_STACK];
  public:
    Stack()
    {
      top = -1;
    }
    bool isEmpty()
    {
      return (top == -1);
    }
    bool isFull()
    {
      return (top == MAX_STACK - 1);
    }
    void push(int newItem)
    {
      if (isFull())
      {
        cout << "Stack is full" << endl;
      }
      else
      {
        top++;
        items[top] = newItem;
      }
    }
    void pop()
    {
      if (isEmpty())
      {
        cout << "Stack is empty" << endl;
      }
      else
      {
        top--;
      }
    }
    int peek()
    {
      if (isEmpty())
      {
        cout << "Stack is empty" << endl;
        return -1;
      }
      else
      {
        return items[top];
      }
    }
    void print()
    {
      if (isEmpty())
      {
        cout << "Stack is empty" << endl;
      }
      else
      {
        for (int i = top; i >= 0; i--)
        {
          cout << items[i] << " ";
        }
        cout << endl;
      }
    }
};

int main()
{
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.print();
  s.pop();
  s.print();
  s.pop();  
  s.print();  
  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();
  
  return 0;
}

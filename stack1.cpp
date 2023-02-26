#include<iostream>
using namespace std;

Stack()
{
  top = -1;
} // end Stack constructor

bool Stack::isEmpty()
{
  return (top == -1);
} // end isEmpty

bool Stack::isFull()
{
  return (top == MAX_STACK - 1);
} // end isFull

void Stack::push(int newItem)
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
} // end push

void Stack::pop()
{
  if (isEmpty())
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    top--;
  }
} // end pop

int Stack::peek()
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
} // end peek

void Stack::print()
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
} // end print

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
    s.pop();
    s.print();
    s.pop();
    s.print();

    
    return 0;
}

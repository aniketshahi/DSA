#include <iostream>
using namespace std;
class node
{
public:
    int key;
    int data;
    node *next;
    node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    node(int k, int d)
    {
        key = k;
        data = d;
        next = NULL;
    }
};
void insertAthead(node *&head, int d)
{
    node temp = new node(d);
    temp->next = head;
    head = temp;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node n1(1, 10);
    node n2(2, 10);
    node n3(3, 30);
    // singlyLinkedList s(&n1);
    // s.appendnode(&n2);
    // s.prependnode(&n3);
    node *node1 = new node(4, 40);
    cout << node1->key << endl;
    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}
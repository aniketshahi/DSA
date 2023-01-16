#include <iostream>
using namespace std;
class node{
    public:
    int key;
    int data;
    node* next;
    node(){
        key =0;
        data=0;
        next =NULL;
    } 
    node(int k,int d){
        key=k;
        data =d;
        next =NULL;
    }
};
class singlyLinkedList{
   public:
   node *head;
   singlyLinkedList(node* h){
    head=NULL;
   }
   singlyLinkedList(NODE* n){
       head=n;
   }
   node*nodeExits(int k){
    node*temp=NULL;
    node*ptr=head;
    while(pyr!=NULL){
        if(ptr->key==k){
            temp=ptr;
        }
        ptr=ptr->nextl;
    }
   }
   void prependnode(node* h){
      
   }
   void appendnode(node* h);
   void insertnode(key);
   void deletenote(key);
   void updatenode(key);

};
int main()
{
    node n1(1,10);
    node n2(2,10);
    node n3(3,30);
    singlyLinkedList s(&n1);
    s.appendnode(&n2);
    s.prependnode(&n3);


return 0;
}
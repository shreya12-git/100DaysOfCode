// Doubly linked list:
// insertion:
#include <bits/stdc++.h>
using namespace std;
class Node
{   public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertAthead(Node *&head,int data){
  Node *temp=new Node(data);
  temp->next=head;
  head->prev=temp;
  head=temp;
}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *node1 = new Node(4);
    Node *head=node1;
    insertAthead(head,3);
    insertAthead(head,12);
    insertAthead(head,2);
    insertAthead(head,1);
    print(head);
}
//insertion at the end in singly linked list:
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtTail(Node *&tail, int data){
    Node *temp=new Node(data);
    tail->next = temp;
    tail=temp;
}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
       temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node *node1=new Node(10);
    Node *head=node1;
    Node *tail=node1;
    insertAtTail(tail,25);
    insertAtTail(tail,35);
    insertAtTail(tail,48);
    insertAtTail(tail,18);
    insertAtTail(tail,20);
    insertAtTail(tail,15);
    print(head);

}
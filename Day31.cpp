//Insertion at tail
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertAtTail(Node *&tail,int data){
    Node *temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *node1=new Node(9);
    Node *tail=node1;
    Node *head=node1;
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,6);
    insertAtTail(tail,1);
    insertAtTail(tail,8);
    print(head);


}
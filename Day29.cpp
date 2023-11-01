//Doubly linked list:
//creation and finding its length:
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
int length(Node *&head){
    Node *temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void print(Node *&head){
    Node *temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node *node1=new Node(12);
    Node *head=node1;
    cout<<length(head)<<endl;
    print(head);

}
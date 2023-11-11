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
void insertAtHead(Node* &head,int data){
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;

}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* kReverseNode(Node *head,int k){
    if(head==NULL){
        return NULL;
    }
    Node *next=NULL;
    Node *curr=head;
    Node *prev=NULL;
    int count=0;
    if(curr !=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next !=NULL){
        head->next=kReverseNode(next,k);
    }
    return prev;
}
int main(){
    Node *n1=new Node(34);
    Node *head=n1;
    cout<<"Linked List is: "<<endl;
    insertAtHead(head,23);
    insertAtHead(head,45);
    insertAtHead(head,56);
    insertAtHead(head,90);
    insertAtHead(head,12);
    insertAtHead(head,4);
    print(head);
    int k;
    cout<<"Enter the value of the k: "<<endl;
    cin>>k;
    cout<<"The reverse of k groups is: "<<endl;
    Node *reverse=kReverseNode(head,k);
    print(reverse);
}
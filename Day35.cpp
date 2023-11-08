//Delete node from circular linked list:
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
    ~Node(){
        int value=this->data;
        while (this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};
void insertionofNode(Node *&tail,int element,int data){
    if(tail==NULL){
        Node *newnode=new Node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        Node *curr=tail;
        while(curr->data != element){
            curr=curr->next;
        }
        Node *temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node *&tail){
    Node *temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail !=temp);
    cout<<endl;
}
void deleteNode(Node *&tail,int element){
if(tail==NULL){
    cout<<"list is empty"<<endl;
    return;
}
else{
Node *prev=tail;
Node *curr=prev->next;
    while(curr->data!=element){
        prev=curr;
        curr=curr->next;
    }
     prev->next=curr->next;
    //1 node linked list:
    if(curr==prev){
        tail=NULL;
    }

    //>=2 node linked list:
    if(tail==curr){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;
} 
}
int main(){
    Node *tail=NULL;
    insertionofNode(tail,5,3);
    print(tail);
    insertionofNode(tail,3,5);
    print(tail);
    insertionofNode(tail,5,7);
    print(tail);
    insertionofNode(tail,7,9);
    print(tail);
    insertionofNode(tail,5,6);
    print(tail);
    insertionofNode(tail,9,10);
    print(tail);
    insertionofNode(tail,3,4);
    print(tail);
    deleteNode(tail,3);
    print(tail);

  return 0; 
}
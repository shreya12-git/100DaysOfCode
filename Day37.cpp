//Middle of the ll:
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
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail,int data){
    Node *temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertNode(Node *&tail,Node *&head,int position,int data){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    Node *temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node *nodetoinsert=new Node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
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
int getLength(Node *head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
Node *findMiddle(Node *head){ //1st approach
    int len=getLength(head);
    int ans=len/2;
    Node *temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtTail(tail, 25);
    insertAtTail(tail, 35);
    insertAtTail(tail, 48);
    insertAtTail(tail, 18);
    insertAtTail(tail, 20);
    // insertAtTail(tail, 15);
    insertNode(tail,head, 4, 37);
    insertNode(tail,head, 1, 5);
    cout<<"LINKED LIST IS:"<<endl;
    print(head);
    Node *middle=findMiddle(head);
    cout<<"The middle element is:"<<middle->data<<endl;
 
}
//2nd approach:
/*
Node *getMiddle(Node *head){
    if(head==NULL|head->next==NULL){
        return head;
    }
    | 2 Nodes |
    if(head->next->next==NULL){
        return head->next;
    }
    Node *slow=head;
    Node *fast=head->next;
    while(fast !=  NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
*/
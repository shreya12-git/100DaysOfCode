//Reversing the linked list:
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
Node *reverseLinkedList(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *prev=NULL;
    Node *curr=head;
    while(curr !=NULL){
        Node *forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
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
    insertAtTail(tail, 15);
    insertNode(tail,head, 4, 37);
    insertNode(tail,head, 1, 5);
    cout<<"LINKED LIST BEFORE REVERSE:"<<endl;
    print(head);
    head=reverseLinkedList(head);
    cout<<"LINKED LIST AFTER REVERSE:"<<endl;
    print(head);

}
/*reversing using recursion
void reverse(Node *&head,Node *curr,Node* prev){
    |Base Case|
    if(curr==NULL){
        head=prev;
        return;
    }
    Node *forward=curr->next;
    reverse(head,forward,curr);
    curr->next=prev
}
Node *reverseLL(Node *head){
    Node *curr=head;
    Node *prev=NULL;
    reverse(head,curr,prev);
    return head;
}
*/
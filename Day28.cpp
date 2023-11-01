//Deletion of node:
#include <bits\stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    //constructor for creating the node:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    //destructor for deleting the node:
    ~Node(){
        int value= this -> data;
        //memory free:
        if(this->next !=NULL){
            delete next;
            this -> next =NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtMiddle(Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void deleteNode(Node *&head,int position){
    if(position==1){
        Node *temp=head;
        head= head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node *curr=head;
        Node *prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
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
    insertAtMiddle(head, 4, 37);
    insertAtMiddle(head, 1, 5);
    deleteNode(head,1);
    deleteNode(head,5);
    print(head);
}

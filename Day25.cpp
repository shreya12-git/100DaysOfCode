// Creating linked list:
//Insertion at start: Day25
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
    cout << node1->data << endl;
    cout << node1->next << endl;
    Node *head = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtHead(head, 17);
    insertAtHead(head, 19);
    insertAtHead(head, 35);
    insertAtHead(head, 78);
    print(head);
}
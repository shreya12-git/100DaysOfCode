// Doubly Linked list:
// insertion at any point:
#include <bits/stdc++.h>
using namespace std;
// Insertion at tail
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
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
void insertAthead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtMiddle(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAthead(head, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
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
    Node *node1 = new Node(9);
    Node *tail = node1;
    Node *head = node1;
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 6);
    insertAtTail(tail, 1);
    insertAtTail(tail, 8);
    insertAtMiddle(tail, head, 3, 12);

    print(head);
}
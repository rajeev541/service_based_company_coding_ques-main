
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

//  ---------------INSERTION IN SINGLY LINKED LIST---------------------------------

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

void insertAtEnd(Node *&tail, int d)
{
    // 1.creating a node
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, int d, int pos)
{

    if (pos == 0)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = new Node(d);
    Node *ptr = head;
    int i = 1;
    while (i < pos)
    {
        ptr = ptr->next;
        i++;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}

//  -----------------------DELETION IN SINGLY LINKED LIST-------------------------

void deleteAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    cout << temp->data << " Node is deleted sucsessfully !" << endl;
    free(temp);
}

void deleteAtPosition(Node *&head, int pos)
{

    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    int i = 1;
    Node *curr = head;
    Node *prev = NULL;

    while (i < pos)
    {
        prev = curr;
        curr = curr->next;
        i++;
    }
    prev->next = curr->next;
    curr->next = NULL;

    delete (curr);
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    // Creating first node
    Node *node1 = new Node(10);
    Node *head = node1; // Pointing to the first node always
    Node *tail = node1; // pointing to last node

    /*
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    print(head);

    */

    insertAtEnd(tail, 20);
    insertAtEnd(tail, 30);
    insertAtEnd(tail, 40);
    print(head);
    cout << endl;

    
    insertAtPosition(head, 15, 0);
    print(head);
    cout << endl;


    deleteAtHead(head);
    print(head);
    cout << endl


         << "After deletion at specific position" << endl;
    deleteAtPosition(head, 1);
    print(head);
    return 0;
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head = NULL;
void insertEnd(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void deleteValue(int value)
{
    if (head == NULL)
        return;
    if (head->data == value)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current = head;
    while (current->next != NULL && current->next->data != value)
        current = current->next;
    if (current->next == NULL)
    {
        cout << "Value not found." << endl;
        return;
    }
    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}
void display()
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}
void reversePrint(Node* node)
{
    if (node == NULL)
        return;

    reversePrint(node->next);
    cout << node->data << " ";
}
int main()
{
    insertEnd(100);
    insertEnd(101);
    insertEnd(102);
    insertEnd(103);
    cout << "Queue: ";
    display();
    deleteValue(102);
    cout << "After deletion: ";
    display();
    cout << "Reverse: ";
    reversePrint(head);
    cout << endl;
    return 0;
}

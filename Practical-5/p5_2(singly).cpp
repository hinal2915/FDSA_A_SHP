#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

Node* last = NULL;
void insertBeginning(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    if (last == NULL)
    {
        last = newNode;
        newNode->next = newNode;
    } else
    {
        newNode->next = last->next;
        last->next = newNode;
    }
}
void insertEnd(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    if (last == NULL)
    {
        last = newNode;
        newNode->next = newNode;
    } else
    {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}
void deleteValue(int value)
{
    if (last == NULL)
        return;
    Node* current = last->next;
    Node* previous = last;
    do
    {
        if (current->data == value)
        {
            if (current == last && current->next == last)
            {
                last = NULL;
            }
            else if (current == last)
            {
                previous->next = last->next;
                last = previous;
            }
            else
            {
                previous->next = current->next;
            }
            delete current;
            return;
        }
        previous = current;
        current = current->next;
    }
    while (current != last->next);
}
void display()
{
    if (last == NULL)
    {
        cout << "Circle is empty." << endl;
        return;
    }
    Node* current = last->next;
    do
    {
        cout << current->data << " ";
        current = current->next;
    } while (current != last->next);

    cout << endl;
}

int main() {
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);

    cout << "Circle: ";
    display();

    insertBeginning(4);
    cout << "After joining: ";
    display();

    deleteValue(2);
    cout << "After leaving: ";
    display();

    return 0;
}

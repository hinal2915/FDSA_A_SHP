#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};
Node* head = NULL;
void insertEnd(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
        return;
    }
    Node* tail = head->prev;
    newNode->next = head;
    newNode->prev = tail;
    tail->next = newNode;
    head->prev = newNode;
}
void deleteValue(int value)
{
    if (head == NULL)
        return;
    Node* current = head;
    do
    {
        if (current->data == value)
            {
            if (current->next == current)
            {
                head = NULL;
            }
            else
            {
                current->prev->next = current->next;
                current->next->prev = current->prev;
                if (current == head)
                    head = current->next;
            }
            delete current;
            return;
        }
        current = current->next;
    } while (current != head);
}
void display()
{
    if (head == NULL)
    {
        cout << "Circle is empty." << endl;
        return;
    }
    Node* current = head;
    do
    {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);

    cout << endl;
}
int main()
{
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    cout << "Circle: ";
    display();
    insertEnd(4);
    cout << "After joining: ";
    display();
    deleteValue(2);
    cout << "After leaving: ";
    display();
    return 0;
}

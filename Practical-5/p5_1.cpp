#include <iostream>
using namespace std;
struct Node
{
    string song;
    Node* prev;
    Node* next;
};
Node* head = NULL;
Node* tail = NULL;
void insertBeginning(string song)
{
    Node* newNode = new Node;
    newNode->song = song;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    else
        tail = newNode;
    head = newNode;
}
void insertEnd(string song)
{
    Node* newNode = new Node;
    newNode->song = song;
    newNode->next = NULL;
    newNode->prev = tail;
    if (tail != NULL)
        tail->next = newNode;
    else
        head = newNode;

    tail = newNode;
}
void insertAfter(string target, string song)
{
    Node* current = head;
    while (current != NULL && current->song != target)
        current = current->next;
    if (current == NULL)
    {
        cout << "Song not found!" << endl;
        return;
    }
    Node* newNode = new Node;
    newNode->song = song;
    newNode->prev = current;
    newNode->next = current->next;
    if (current->next != NULL)
        current->next->prev = newNode;
    else
        tail = newNode;
    current->next = newNode;
}
void removeFirst()
{
    if (head == NULL)
        return;
    Node* temp = head;
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    else
        tail = NULL;
    delete temp;
}
int countSongs()
{
    int count = 0;
    Node* current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
void display()
{
    Node* current = head;
    while (current != NULL)
    {
        cout << current->song << " ";
        current = current->next;
    }
    cout << endl;
}
int main()
{
    insertEnd("Song 1");
    display();
    insertBeginning("Song 2");
    display();
    insertAfter("Song 1", "Song 3");
    display();
    insertEnd("Song 4");
    display();
    cout << "Number of songs: " << countSongs() << endl;
    removeFirst();
    display();
    return 0;
}

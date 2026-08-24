#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;
};
Node* head=NULL;
void insertFront(int value)
{
    Node*newNode=new Node;
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
void insertEnd(int value)
{
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertAtPosition(int value,int position)
{
    if(position==0)
    {
        insertFront(value);
        return;
    }
    Node* temp=head;
    for(int i=0;i<position-1 && temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Invalid Position "<<endl;
        return;
    }
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}
void display()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    insertEnd(101);
    display();
    insertFront(100);
    display();
    insertEnd(102);
    display();
    insertAtPosition(103,2);
    display();
    return 0;
}

#include<iostream>
using namespace std;

struct Node
{
    int patient;
    Node* next;
};
Node* front=NULL;
Node* rear=NULL;
void arrive(int patient)
{
    Node* newNode=new Node;
    newNode->patient=patient;
    newNode->next=NULL;
    if(rear==front)
    {
        front=newNode;
        rear=newNode;
    }
    else
    {
        rear->next=newNode;
        rear=newNode;
    }
    cout<<"Arrived: "<<patient<<endl;
    cout<<"Current front: "<<front->patient<<endl;
}
void attend()
{
    if(front==NULL)
    {
        cout<<"Ward is empty. No patient to attend. "<<endl;
        return;
    }
    Node* temp=front;
    cout<<"Attended: "<<front->patient<<endl;
    front=front->next;
    if(front==NULL)
        rear=NULL;
    else
        cout<<"Current front: "<<front->patient<<endl;
    delete temp;
}
int main()
{
    arrive(101);
    arrive(102);
    arrive(103);
    attend();
    attend();
    arrive(104);
    arrive(105);
    arrive(106);
    attend();
    return 0;
}
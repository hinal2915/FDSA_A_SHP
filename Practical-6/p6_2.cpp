#include <iostream>
using namespace std;
struct Node
{
    string page;
    Node* next;
};
Node* top = NULL;
void visit(string page)
{
    Node* newNode = new Node;
    newNode->page = page;
    newNode->next = top;
    top = newNode;
    cout << "Visited: " << page << endl;
    cout << "Current page: " << top->page << endl;
}
void back()
{
    if (top == NULL)
    {
        cout << "No history left" << endl;
        return;
    }
    Node* temp = top;
    cout << "Back from: " << top->page << endl;
    top = top->next;
    delete temp;
    if (top == NULL)
        cout << "No page left" << endl;
    else
        cout << "Current page: " << top->page << endl;
}
int main()
{
    visit("Instagram");
    visit("Google");
    visit("YouTube");
    back();
    back();
    back();
    back();
    return 0;
}
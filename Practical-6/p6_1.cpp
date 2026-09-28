#include <iostream>
using namespace std;
int stackArr[5];
int top = -1;
void push(int value)
{
    if (top == 4)
    {
        cout << "Stack is full" << endl;
        return;
    }
    top++;
    stackArr[top] = value;
    cout << "Pushed: " << value << endl;
    cout << "Current top: " << stackArr[top] << endl;
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Popped: " << stackArr[top] << endl;
    top--;
    if (top == -1)
        cout << "Stack is empty" << endl;
    else
        cout << "Current top: " << stackArr[top] << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    pop();
    pop();
    return 0;
}
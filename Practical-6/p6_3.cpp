#include <iostream>
#include <stack>
using namespace std;
bool isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}
int priority(char ch)
{
    if (ch == '^')
        return 3;

    if (ch == '*' || ch == '/')
        return 2;

    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}
string infixToPostfix(string expression)
{
    stack<char> s;
    string postfix = "";

    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
        if (ch == ' ')
            continue;
        if (isalnum(ch))
        {
            postfix += ch;
        }
        else if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty())
                s.pop();
        }
        else if (isOperator(ch))
        {
            while (!s.empty() &&
                   priority(s.top()) >= priority(ch))
            {
                postfix += s.top();
                s.pop();
            }

            s.push(ch);
        }
    }
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}
int main()
{
    string expression;
    cout << "Enter infix expression: ";
    cin >> expression;
    cout << "Postfix expression: ";
    cout << infixToPostfix(expression);
    return 0;
}
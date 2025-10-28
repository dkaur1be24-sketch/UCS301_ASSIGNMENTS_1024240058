#include <iostream>
using namespace std;
/////////////////////////////////////////////////
// int *stackArr;
// int top = -1;
// int stackSize;

// void push(int value)
// {
//     if (top == stackSize - 1)
//         cout << "Stack Overflow! Cannot push " << value << endl;
//     else
//     {
//         top++;
//         stackArr[top] = value;
//         cout << value << " pushed into the stack." << endl;
//     }
// }

// void pop()
// {
//     if (top == -1)
//         cout << "Stack Underflow! Nothing to pop." << endl;
//     else
//     {
//         cout << stackArr[top] << " popped from the stack." << endl;
//         top--;
//     }
// }

// bool isEmpty()
// {
//     return top == -1;
// }

// bool isFull()
// {
//     return top == stackSize - 1;
// }

// void display()
// {
//     if (isEmpty())
//         cout << "Stack is empty!" << endl;
//     else
//     {
//         cout << "Stack elements (top to bottom): ";
//         for (int i = top; i >= 0; i--)
//             cout << stackArr[i] << " ";
//         cout << endl;
//     }
// }

// void peek()
// {
//     if (isEmpty())
//         cout << "Stack is empty! No top element." << endl;
//     else
//         cout << "Top element is: " << stackArr[top] << endl;
// }

// int main()
// {
//     int choice, value;

//     cout << "Enter the size of the stack: ";
//     cin >> stackSize;

//     stackArr = new int[stackSize];

//     cout << "STACK OPERATIONS USING ARRAY" << endl;

//     do
//     {
//         cout << "\nMenu:\n";
//         cout << "1. Push\n";
//         cout << "2. Pop\n";
//         cout << "3. Check if Empty\n";
//         cout << "4. Check if Full\n";
//         cout << "5. Display Stack\n";
//         cout << "6. Peek\n";
//         cout << "7. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             cout << "Enter value to push: ";
//             cin >> value;
//             push(value);
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             cout << (isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
//             break;
//         case 4:
//             cout << (isFull() ? "Stack is full." : "Stack is not full.") << endl;
//             break;
//         case 5:
//             display();
//             break;
//         case 6:
//             peek();
//             break;
//         case 7:
//             cout << "Exiting program..." << endl;
//             break;
//         default:
//             cout << "Invalid choice! Please try again." << endl;
//         }
//     } while (choice != 7);

//     delete[] stackArr;
//     return 0;
// }
///////////////////////////////////////////////////////////////////

// #include <cstring>

// int main()
// {
//     char str[100];
//     char stackArr[100];
//     int top = -1;

//     cout << "Enter a string: ";
//     cin >> str;

//     int len = strlen(str);

//     for (int i = 0; i < len; i++)
//         stackArr[++top] = str[i];

//     cout << "Reversed string: ";
//     while (top != -1)
//         cout << stackArr[top--];

//     cout << endl;
//     return 0;
// }
//////////////////////////////////////////////////////////////

// char stackArr[100];
// int top = -1;

// void push(char ch)
// {
//     stackArr[++top] = ch;
// }

// void pop()
// {
//     top--;
// }

// bool isEmpty()
// {
//     return top == -1;
// }

// bool isBalanced(const char *expr)
// {
//     for (int i = 0; expr[i] != '\0'; i++)
//     {
//         char ch = expr[i];

//         if (ch == '(' || ch == '{' || ch == '[')
//             push(ch);
//         else if (ch == ')' || ch == '}' || ch == ']')
//         {
//             if (isEmpty())
//                 return false;

//             char topChar = stackArr[top];
//             if ((ch == ')' && topChar != '(') ||
//                 (ch == '}' && topChar != '{') ||
//                 (ch == ']' && topChar != '['))
//                 return false;
//             pop();
//         }
//     }
//     return isEmpty();
// }

// int main()
// {
//     char expr[100];
//     cout << "Enter an expression: ";
//     cin >> expr;

//     if (isBalanced(expr))
//         cout << "Expression has balanced parentheses." << endl;
//     else
//         cout << "Expression does NOT have balanced parentheses." << endl;

//     return 0;
// }
//////////////////////////////////////////////////////////////////////
char stackArr[100];
int top = -1;

void push(char ch)
{
    stackArr[++top] = ch;
}

char pop()
{
    return stackArr[top--];
}

char peek()
{
    return stackArr[top];
}

bool isEmpty()
{
    return top == -1;
}

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

bool isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

void infixToPostfix(char infix[])
{
    char postfix[100];
    int j = 0;

    for (int i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];

        if (isalnum(ch))
            postfix[j++] = ch;
        else if (ch == '(')
            push(ch);
        else if (ch == ')')
        {
            while (!isEmpty() && peek() != '(')
                postfix[j++] = pop();
            pop(); // remove '('
        }
        else if (isOperator(ch))
        {
            while (!isEmpty() && precedence(peek()) >= precedence(ch))
                postfix[j++] = pop();
            push(ch);
        }
    }

    while (!isEmpty())
        postfix[j++] = pop();

    postfix[j] = '\0';

    cout << "Postfix Expression: " << postfix << endl;
}

int main()
{
    char infix[100];
    cout << "Enter an infix expression: ";
    cin >> infix;

    infixToPostfix(infix);

    return 0;
}

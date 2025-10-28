#include <iostream>
using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
// };

// Node *head = NULL;

// void insertEnd(int val)
// {
//     Node *newNode = new Node{val, NULL};
//     if (!head)
//     {
//         head = newNode;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next)
//         temp = temp->next;
//     temp->next = newNode;
// }

// int countAndDelete(int key)
// {
//     int count = 0;
//     while (head && head->data == key)
//     {
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//         count++;
//     }
//     Node *curr = head;
//     while (curr && curr->next)
//     {
//         if (curr->next->data == key)
//         {
//             Node *temp = curr->next;
//             curr->next = curr->next->next;
//             delete temp;
//             count++;
//         }
//         else
//         {
//             curr = curr->next;
//         }
//     }
//     return count;
// }

// void display()
// {
//     Node *temp = head;
//     while (temp)
//     {
//         cout << temp->data;
//         if (temp->next)
//             cout << "->";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     int n, key, val;
//     cout << "Enter number of nodes: ";
//     cin >> n;
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> val;
//         insertEnd(val);
//     }
//     cout << "Enter key to delete: ";
//     cin >> key;

//     int cnt = countAndDelete(key);
//     cout << "Count: " << cnt << endl;
//     cout << "Updated Linked List: ";
//     display();
// }
///////////////////////////////////////////////////////////////////////

// struct Node
// {
//     int data;
//     Node *next;
// };

// Node *head = NULL;

// void insertEnd(int val)
// {
//     Node *newNode = new Node{val, NULL};
//     if (!head)
//     {
//         head = newNode;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next)
//         temp = temp->next;
//     temp->next = newNode;
// }

// void findMiddle()
// {
//     Node *slow = head, *fast = head;
//     while (fast && fast->next)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     if (slow)
//         cout << "Middle element: " << slow->data << endl;
// }

// int main()
// {
//     int n, val;
//     cout << "Enter number of nodes: ";
//     cin >> n;
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> val;
//         insertEnd(val);
//     }
//     findMiddle();
// }
////////////////////////////////////////////////////////////////////////

// struct Node
// {
//     int data;
//     Node *next;
// };

// Node *head = NULL;

// void insertEnd(int val)
// {
//     Node *newNode = new Node{val, NULL};
//     if (!head)
//     {
//         head = newNode;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next)
//         temp = temp->next;
//     temp->next = newNode;
// }

// void reverseList()
// {
//     Node *prev = NULL, *curr = head, *next = NULL;
//     while (curr)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     head = prev;
// }

// void display()
// {
//     Node *temp = head;
//     while (temp)
//     {
//         cout << temp->data;
//         if (temp->next)
//             cout << "->";
//         temp = temp->next;
//     }
//     cout << "->NULL\n";
// }

// int main()
// {
//     int n, val;
//     cout << "Enter number of nodes: ";
//     cin >> n;
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> val;
//         insertEnd(val);
//     }
//     reverseList();
//     cout << "Reversed List: ";
//     display();
// }
#include <iostream>
using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
// };

// struct CircularLinkedList
// {
//     Node *head;
// };

// // Function to initialize the list
// void initList(CircularLinkedList &list)
// {
//     list.head = nullptr;
// }

// // Insert at beginning
// void insertAtBegin(CircularLinkedList &list, int num)
// {
//     Node *newNode = new Node{num, nullptr};

//     if (!list.head)
//     {
//         list.head = newNode;
//         newNode->next = list.head;
//     }
//     else
//     {
//         Node *current = list.head;
//         while (current->next != list.head)
//         {
//             current = current->next;
//         }
//         current->next = newNode;
//         newNode->next = list.head;
//         list.head = newNode;
//     }
// }

// // Insert at end
// void insertAtEnd(CircularLinkedList &list, int num)
// {
//     Node *newNode = new Node{num, nullptr};

//     if (!list.head)
//     {
//         list.head = newNode;
//         newNode->next = list.head;
//     }
//     else
//     {
//         Node *current = list.head;
//         while (current->next != list.head)
//         {
//             current = current->next;
//         }
//         current->next = newNode;
//         newNode->next = list.head;
//     }
// }

// // Delete at beginning
// void deleteAtBegin(CircularLinkedList &list)
// {
//     if (!list.head)
//     {
//         cout << "Linked list is empty, Nothing to delete!";
//         return;
//     }

//     Node *temp = list.head;

//     if (list.head->next == list.head)
//     {
//         list.head = nullptr;
//     }
//     else
//     {
//         Node *current = list.head;
//         while (current->next != list.head)
//         {
//             current = current->next;
//         }
//         list.head = list.head->next;
//         current->next = list.head;
//     }
//     delete temp;
// }

// // Delete at end
// void deleteAtEnd(CircularLinkedList &list)
// {
//     if (!list.head)
//     {
//         cout << "Linked list is Empty, Nothing to delete!";
//         return;
//     }

//     Node *temp = list.head;

//     if (list.head->next == list.head)
//     {
//         list.head = nullptr;
//     }
//     else
//     {
//         Node *current = list.head;
//         Node *prev = nullptr;
//         while (current->next != list.head)
//         {
//             prev = current;
//             current = current->next;
//         }
//         prev->next = list.head;
//     }
//     delete temp;
// }

// // Search
// bool search(CircularLinkedList &list, int value)
// {
//     if (!list.head)
//     {
//         cout << "Linked list is Empty, No element to search!";
//         return false;
//     }

//     Node *temp = list.head;
//     do
//     {
//         if (temp->data == value)
//         {
//             cout << "Element found!\n";
//             return true;
//         }
//         temp = temp->next;
//     } while (temp != list.head);

//     cout << "Element not found!";
//     return false;
// }

// // Display
// void display(CircularLinkedList &list)
// {
//     if (!list.head)
//     {
//         cout << "Linked list is empty, No elements to display!\n";
//         return;
//     }

//     Node *temp = list.head;
//     do
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != list.head);
//     cout << endl;
// }

// // Count size
// int get_size(CircularLinkedList &list)
// {
//     if (!list.head)
//         return 0;

//     int size = 1;
//     Node *temp = list.head;

//     while (temp->next != list.head)
//     {
//         size++;
//         temp = temp->next;
//     }
//     return size;
// }

// // Split function
// void splitLinkedList(CircularLinkedList &C, CircularLinkedList &C1, CircularLinkedList &C2)
// {
//     int size = get_size(C);

//     if (size == 0)
//         return;

//     if (size % 2 == 0)
//     {
//         Node *temp = C.head;
//         for (int i = 1; i <= size / 2; i++)
//         {
//             insertAtEnd(C1, temp->data);
//             temp = temp->next;
//         }
//         for (int i = 1; i <= size / 2; i++)
//         {
//             insertAtEnd(C2, temp->data);
//             temp = temp->next;
//         }
//     }
//     else
//     {
//         Node *temp = C.head;
//         for (int i = 1; i <= (size / 2) + 1; i++)
//         {
//             insertAtEnd(C1, temp->data);
//             temp = temp->next;
//         }
//         for (int i = (size / 2) + 2; i <= size; i++)
//         {
//             insertAtEnd(C2, temp->data);
//             temp = temp->next;
//         }
//     }
// }

// int main()
// {
//     CircularLinkedList C, C1, C2;

//     initList(C);
//     initList(C1);
//     initList(C2);

//     insertAtBegin(C, 3);
//     insertAtBegin(C, 4);
//     insertAtBegin(C, 6);
//     insertAtBegin(C, 7);
//     insertAtBegin(C, 8);

//     display(C);

//     splitLinkedList(C, C1, C2);

//     display(C1);
//     display(C2);

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

// struct Node
// {
//     int data;
//     Node *next;
// };

// void insertAtEnd(Node *&head, int value)
// {
//     Node *newNode = new Node{value, nullptr};

//     if (head == nullptr)
//     {
//         head = newNode;
//         newNode->next = head;
//     }
//     else
//     {
//         Node *temp = head;
//         while (temp->next != head)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = head;
//     }
// }

// void displayWithRepeat(Node *head)
// {
//     if (head == nullptr)
//     {
//         cout << "List is empty!";
//         return;
//     }

//     Node *temp = head;

//     do
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != head);

//     cout << head->data;
// }

// int main()
// {
//     Node *head = nullptr;

//     insertAtEnd(head, 20);
//     insertAtEnd(head, 100);
//     insertAtEnd(head, 40);
//     insertAtEnd(head, 80);
//     insertAtEnd(head, 60);

//     displayWithRepeat(head);

//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

// (a)
// struct Node
// {
//     int data;
//     Node *prev;
//     Node *next;
// };

// void insertAtEnd(Node *&head, int value)
// {
//     Node *newNode = new Node{value, nullptr, nullptr};

//     if (head == nullptr)
//     {
//         head = newNode;
//         return;
//     }

//     Node *temp = head;
//     while (temp->next != nullptr)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     newNode->prev = temp;
// }

// int getSize(Node *head)
// {
//     int count = 0;
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// int main()
// {
//     Node *head = nullptr;

//     insertAtEnd(head, 10);
//     insertAtEnd(head, 20);
//     insertAtEnd(head, 30);
//     insertAtEnd(head, 40);

//     cout << "Size of Doubly Linked List = " << getSize(head);

//     return 0;
// }
////////////////////////////////////

//(b)

// struct Node
// {
//     int data;
//     Node *next;
// };

// void insertAtEnd(Node *&head, int value)
// {
//     Node *newNode = new Node{value, nullptr};

//     if (head == nullptr)
//     {
//         head = newNode;
//         newNode->next = head;
//     }
//     else
//     {
//         Node *temp = head;
//         while (temp->next != head)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = head;
//     }
// }

// int getCircularSize(Node *head)
// {
//     if (head == nullptr)
//         return 0;

//     int count = 1;
//     Node *temp = head;

//     while (temp->next != head)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// int main()
// {
//     Node *head = nullptr;

//     insertAtEnd(head, 5);
//     insertAtEnd(head, 15);
//     insertAtEnd(head, 25);
//     insertAtEnd(head, 35);

//     cout << "Size of Circular Linked List = " << getCircularSize(head);

//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

// struct Node
// {
//     char data;
//     Node *prev;
//     Node *next;
// };

// void insertAtEnd(Node *&head, char value)
// {
//     Node *newNode = new Node{value, nullptr, nullptr};

//     if (head == nullptr)
//     {
//         head = newNode;
//         return;
//     }

//     Node *temp = head;
//     while (temp->next != nullptr)
//     {
//         temp = temp->next;
//     }

//     temp->next = newNode;
//     newNode->prev = temp;
// }

// bool isPalindrome(Node *head)
// {
//     if (head == nullptr)
//         return true;

//     Node *left = head;
//     Node *right = head;

//     while (right->next != nullptr)
//     {
//         right = right->next;
//     }

//     while (left != right && left->prev != right)
//     {
//         if (left->data != right->data)
//         {
//             return false;
//         }
//         left = left->next;
//         right = right->prev;
//     }

//     return true;
// }

// int main()
// {
//     Node *head = nullptr;

//     insertAtEnd(head, 'R');
//     insertAtEnd(head, 'A');
//     insertAtEnd(head, 'D');
//     insertAtEnd(head, 'A');
//     insertAtEnd(head, 'R');

//     if (isPalindrome(head))
//         cout << "The doubly linked list is a Palindrome.";
//     else
//         cout << "The doubly linked list is NOT a Palindrome.";

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////

// struct Node
// {
//     int data;
//     Node *next;
// };

// void insertAtEnd(Node *&head, int value)
// {
//     Node *newNode = new Node{value, nullptr};

//     if (head == nullptr)
//     {
//         head = newNode;
//         return;
//     }

//     Node *temp = head;
//     while (temp->next != nullptr)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// bool isCircular(Node *head)
// {
//     if (head == nullptr)
//         return false;

//     Node *temp = head->next;

//     while (temp != nullptr && temp != head)
//     {
//         temp = temp->next;
//     }

//     return (temp == head);
// }

// int main()
// {
//     Node *head = nullptr;

//     insertAtEnd(head, 10);
//     insertAtEnd(head, 20);
//     insertAtEnd(head, 30);

//     if (isCircular(head))
//         cout << "The linked list is Circular.";
//     else
//         cout << "The linked list is NOT Circular.";

//     return 0;
// }

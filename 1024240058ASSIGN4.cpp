#include <iostream>
using namespace std;
#define MAX 5
// class Queue
// {
//     int arr[MAX];
//     int front, rear;

// public:
//     Queue()
//     {
//         front = -1;
//         rear = -1;
//     }
//     bool isEmpty()
//     {
//         return (front == -1);
//     }
//     bool isFull()
//     {
//         return (rear == MAX - 1);
//     }
//     void enqueue(int x)
//     {
//         if (isFull())
//         {
//             cout << "Queue is FULL!\n";
//             return;
//         }
//         if (isEmpty())
//         {
//             front = 0;
//         }
//         arr[++rear] = x;
//         cout << x << " inserted.\n";
//     }
//     void dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is EMPTY!\n";
//             return;
//         }
//         cout << arr[front] << " removed.\n";
//         if (front == rear)
//         {
//             front = rear = -1;
//         }
//         else
//         {
//             front++;
//         }
//     }
//     void peek()
//     {
//         if (isEmpty())
//             cout << "Queue is EMPTY!\n";
//         else
//             cout << "Front element = " << arr[front] << endl;
//     }
//     void display()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is EMPTY!\n";
//             return;
//         }
//         cout << "Queue elements: ";
//         for (int i = front; i <= rear; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     Queue q;
//     int choice, value;
//     cout << "\n--- Queue Menu ---\n";
//     cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n";
//     cout << "5. Check Empty\n6. Check Full\n7. Exit\n";
//     do
//     {
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//             cout << "Enter value: ";
//             cin >> value;
//             q.enqueue(value);
//             break;
//         case 2:
//             q.dequeue();
//             break;
//         case 3:
//             q.peek();
//             break;
//         case 4:
//             q.display();
//             break;
//         case 5:
//             cout << (q.isEmpty() ? "Queue is EMPTY\n" : "Queue is NOT EMPTY\n");
//             break;
//         case 6:
//             cout << (q.isFull() ? "Queue is FULL\n" : "Queue is NOT FULL\n");
//             break;
//         case 7:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice!\n";
//         }
//     } while (choice != 7);
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////

// #define MAX 5
// class CircularQueue
// {
//     int arr[MAX];
//     int front, rear;

// public:
//     CircularQueue()
//     {
//         front = -1;
//         rear = -1;
//     }
//     bool isEmpty()
//     {
//         return (front == -1);
//     }
//     bool isFull()
//     {
//         return ((front == 0 && rear == MAX - 1) || (rear + 1) % MAX == front);
//     }
//     void enqueue(int x)
//     {
//         if (isFull())
//         {
//             cout << "Queue is FULL!\n";
//             return;
//         }
//         if (isEmpty())
//         {
//             front = rear = 0;
//         }
//         else
//         {
//             rear = (rear + 1) % MAX;
//         }
//         arr[rear] = x;
//         cout << x << " inserted.\n";
//     }
//     void dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is EMPTY!\n";
//             return;
//         }
//         cout << arr[front] << " removed.\n";
//         if (front == rear)
//         {
//             front = rear = -1; // queue becomes empty
//         }
//         else
//         {
//             front = (front + 1) % MAX;
//         }
//     }
//     void peek()
//     {
//         if (isEmpty())
//             cout << "Queue is EMPTY!\n";
//         else
//             cout << "Front element = " << arr[front] << endl;
//     }
//     void display()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is EMPTY!\n";
//             return;
//         }
//         cout << "Queue elements: ";
//         int i = front;
//         while (true)
//         {
//             cout << arr[i] << " ";
//             if (i == rear)
//                 break;
//             i = (i + 1) % MAX;
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     CircularQueue q;
//     int choice, value;
//     cout << "\n--- Circular Queue Menu ---\n";
//     cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n";
//     cout << "5. Check Empty\n6. Check Full\n7. Exit\n";
//     do
//     {
//         cout << "Enter choice: ";
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//             cout << "Enter value: ";
//             cin >> value;
//             q.enqueue(value);
//             break;
//         case 2:
//             q.dequeue();
//             break;
//         case 3:
//             q.peek();
//             break;
//         case 4:
//             q.display();
//             break;
//         case 5:
//             cout << (q.isEmpty() ? "Queue is EMPTY\n" : "Queue is NOT EMPTY\n");
//             break;
//         case 6:
//             cout << (q.isFull() ? "Queue is FULL\n" : "Queue is NOT FULL\n");
//             break;
//         case 7:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice!\n";
//         }
//     } while (choice != 7);
//     return 0;
// }
////////////////////////////////////////////////////////////////////////

// #define MAX 100
// class Queue
// {
//     int arr[MAX];
//     int front, rear, size;

// public:
//     Queue()
//     {
//         front = 0;
//         rear = -1;
//         size = 0;
//     }
//     bool isEmpty()
//     {
//         return (size == 0);
//     }
//     bool isFull()
//     {
//         return (size == MAX);
//     }
//     void enqueue(int x)
//     {
//         if (isFull())
//         {
//             cout << "Queue is FULL!\n";
//             return;
//         }
//         rear = (rear + 1) % MAX;
//         arr[rear] = x;
//         size++;
//     }
//     int dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is EMPTY!\n";
//             return -1;
//         }
//         int x = arr[front];
//         front = (front + 1) % MAX;
//         size--;
//         return x;
//     }
//     int peek()
//     {
//         if (isEmpty())
//             return -1;
//         return arr[front];
//     }
//     int getSize()
//     {
//         return size;
//     }
// };
// void interleaveQueue(Queue &q)
// {
//     int n = q.getSize();
//     int half = n / 2;
//     Queue firstHalf;
//     for (int i = 0; i < half; i++)
//     {
//         firstHalf.enqueue(q.dequeue());
//     }
//     while (!firstHalf.isEmpty())
//     {
//         q.enqueue(firstHalf.dequeue());
//         q.enqueue(q.dequeue());
//     }
// }
// int main()
// {
//     Queue q;
//     int n, x;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         q.enqueue(x);
//     }
//     interleaveQueue(q);
//     cout << "Interleaved Queue: ";
//     while (!q.isEmpty())
//     {
//         cout << q.dequeue() << " ";
//     }
//     cout << endl;
//     return 0;
// }
//////////////////////////////////////////////////////////

// #define MAX 100
// class Queue
// {
//     int arr[MAX];
//     int front, rear, size;

// public:
//     Queue()
//     {
//         front = 0;
//         rear = -1;
//         size = 0;
//     }
//     bool isEmpty()
//     {
//         return (size == 0);
//     }
//     bool isFull()
//     {
//         return (size == MAX);
//     }
//     void enqueue(int x)
//     {
//         if (isFull())
//         {
//             cout << "Queue is FULL!\n";
//             return;
//         }
//         rear = (rear + 1) % MAX;
//         arr[rear] = x;
//         size++;
//     }
//     int dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is EMPTY!\n";
//             return -1;
//         }
//         int x = arr[front];
//         front = (front + 1) % MAX;
//         size--;
//         return x;
//     }
//     int peek()
//     {
//         if (isEmpty())
//             return -1;
//         return arr[front];
//     }
//     int getSize()
//     {
//         return size;
//     }
// };
// void interleaveQueue(Queue &q)
// {
//     int n = q.getSize();
//     int half = n / 2;
//     Queue firstHalf;
//     for (int i = 0; i < half; i++)
//     {
//         firstHalf.enqueue(q.dequeue());
//     }
//     while (!firstHalf.isEmpty())
//     {
//         q.enqueue(firstHalf.dequeue());
//         q.enqueue(q.dequeue());
//     }
// }
// int main()
// {
//     Queue q;
//     int n, x;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         q.enqueue(x);
//     }
//     interleaveQueue(q);
//     cout << "Interleaved Queue: ";
//     while (!q.isEmpty())
//     {
//         cout << q.dequeue() << " ";
//     }
//     cout << endl;
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////

// #include <string>
// #define MAX 256
// #define QMAX 1000
// class Queue
// {
//     char arr[QMAX];
//     int front, rear, size;

// public:
//     Queue()
//     {
//         front = 0;
//         rear = -1;
//         size = 0;
//     }
//     bool isEmpty() { return (size == 0); }
//     void enqueue(char c)
//     {
//         if (size == QMAX)
//             return;
//         rear = (rear + 1) % QMAX;
//         arr[rear] = c;
//         size++;
//     }
//     void dequeue()
//     {
//         if (isEmpty())
//             return;
//         front = (front + 1) % QMAX;
//         size--;
//     }
//     char peek()
//     {
//         if (isEmpty())
//             return '\0';
//         return arr[front];
//     }
// };
// void firstNonRepeating(string str)
// {
//     int freq[MAX] = {0};
//     Queue q;
//     for (char c : str)
//     {
//         freq[(int)c]++;
//         q.enqueue(c);
//         while (!q.isEmpty() && freq[(int)q.peek()] > 1)
//         {
//             q.dequeue();
//         }
//         if (q.isEmpty())
//             cout << "-1 ";
//         else
//             cout << q.peek() << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     string input;
//     cout << "Enter string: ";
//     cin >> input;
//     cout << "First non-repeating characters: ";
//     firstNonRepeating(input);
//     return 0;
// }
///////////////////////////////////////////////////////////////////////

#include <queue>
// class StackOneQ
// {
//     queue<int> q;

// public:
//     void push(int x)
//     {
//         int size = q.size();
//         q.push(x);
//         for (int i = 0; i < size; i++)
//         {
//             q.push(q.front());
//             q.pop();
//         }
//     }
//     void pop()
//     {
//         if (q.empty())
//         {
//             cout << "Stack is EMPTY!\n";
//             return;
//         }
//         q.pop();
//     }
//     int top()
//     {
//         if (q.empty())
//             return -1;
//         return q.front();
//     }
//     bool isEmpty()
//     {
//         return q.empty();
//     }
// };
// int main()
// {
//     StackOneQ st;
//     st.push(100);
//     st.push(200);
//     st.push(300);
//     cout << "Top: " << st.top() << endl;
//     st.pop();
//     cout << "Top after pop: " << st.top() << endl;
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////

// class StackTwoQ
// {
//     queue<int> q1, q2;

// public:
//     void push(int x)
//     {
//         q2.push(x);
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         swap(q1, q2);
//     }
//     void pop()
//     {
//         if (q1.empty())
//         {
//             cout << "Stack is EMPTY!\n";
//             return;
//         }
//         q1.pop();
//     }
//     int top()
//     {
//         if (q1.empty())
//             return -1;
//         return q1.front();
//     }
//     bool isEmpty()
//     {
//         return q1.empty();
//     }
// };
// int main()
// {
//     StackTwoQ st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     cout << "Top: " << st.top() << endl;
//     st.pop();
//     cout << "Top after pop: " << st.top() << endl;
//     return 0;
// }
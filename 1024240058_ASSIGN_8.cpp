#include <iostream>
using namespace std;

// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
// };

// Node *createNode(int value)
// {
//     Node *newNode = new Node;
//     newNode->data = value;
//     newNode->left = newNode->right = nullptr;
//     return newNode;
// }

// void preorder(Node *root)
// {
//     if (root == nullptr)
//         return;

//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(Node *root)
// {
//     if (root == nullptr)
//         return;

//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void postorder(Node *root)
// {
//     if (root == nullptr)
//         return;

//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main()
// {
//     Node *root = createNode(1);
//     root->left = createNode(2);
//     root->right = createNode(3);
//     root->left->left = createNode(4);
//     root->left->right = createNode(5);
//     root->right->left = createNode(6);

//     cout << "Pre-order Traversal: ";
//     preorder(root);
//     cout << endl;

//     cout << "In-order Traversal: ";
//     inorder(root);
//     cout << endl;

//     cout << "Post-order Traversal: ";
//     postorder(root);
//     cout << endl;

//     return 0;
// }
///////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
// };

// Node *createNode(int value)
// {
//     Node *temp = new Node;
//     temp->data = value;
//     temp->left = temp->right = nullptr;
//     return temp;
// }

// Node *insertNode(Node *root, int value)
// {
//     if (root == nullptr)
//         return createNode(value);

//     if (value < root->data)
//         root->left = insertNode(root->left, value);
//     else
//         root->right = insertNode(root->right, value);

//     return root;
// }

// Node *searchRecursive(Node *root, int key)
// {
//     if (root == nullptr || root->data == key)
//         return root;

//     if (key < root->data)
//         return searchRecursive(root->left, key);

//     return searchRecursive(root->right, key);
// }

// Node *searchNonRecursive(Node *root, int key)
// {
//     while (root != nullptr)
//     {
//         if (root->data == key)
//             return root;

//         if (key < root->data)
//             root = root->left;
//         else
//             root = root->right;
//     }
//     return nullptr;
// }

// Node *findMin(Node *root)
// {
//     if (root == nullptr)
//         return nullptr;

//     while (root->left != nullptr)
//         root = root->left;

//     return root;
// }

// Node *findMax(Node *root)
// {
//     if (root == nullptr)
//         return nullptr;

//     while (root->right != nullptr)
//         root = root->right;

//     return root;
// }

// Node *inorderSuccessor(Node *root, Node *target)
// {
//     if (target == nullptr)
//         return nullptr;

//     if (target->right != nullptr)
//         return findMin(target->right);

//     Node *successor = nullptr;
//     while (root != nullptr)
//     {
//         if (target->data < root->data)
//         {
//             successor = root;
//             root = root->left;
//         }
//         else if (target->data > root->data)
//         {
//             root = root->right;
//         }
//         else
//             break;
//     }
//     return successor;
// }

// Node *inorderPredecessor(Node *root, Node *target)
// {
//     if (target == nullptr)
//         return nullptr;

//     if (target->left != nullptr)
//         return findMax(target->left);

//     Node *predecessor = nullptr;
//     while (root != nullptr)
//     {
//         if (target->data > root->data)
//         {
//             predecessor = root;
//             root = root->right;
//         }
//         else if (target->data < root->data)
//         {
//             root = root->left;
//         }
//         else
//             break;
//     }
//     return predecessor;
// }

// int main()
// {
//     Node *root = nullptr;
//     int arr[] = {20, 10, 5, 15, 30, 25, 35};
//     for (int i = 0; i < 7; i++)
//         root = insertNode(root, arr[i]);

//     int key = 15;
//     Node *r1 = searchRecursive(root, key);
//     Node *r2 = searchNonRecursive(root, key);

//     cout << "Recursive Search: " << (r1 ? "Found" : "Not Found") << endl;
//     cout << "Non-Recursive Search: " << (r2 ? "Found" : "Not Found") << endl;

//     cout << "Minimum: " << findMin(root)->data << endl;
//     cout << "Maximum: " << findMax(root)->data << endl;

//     Node *target = searchRecursive(root, 15);

//     Node *suc = inorderSuccessor(root, target);
//     Node *pre = inorderPredecessor(root, target);

//     cout << "Inorder Successor of 15: ";
//     if (suc)
//         cout << suc->data << endl;
//     else
//         cout << "None" << endl;

//     cout << "Inorder Predecessor of 15: ";
//     if (pre)
//         cout << pre->data << endl;
//     else
//         cout << "None" << endl;

//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
// };

// Node *createNode(int value)
// {
//     Node *temp = new Node;
//     temp->data = value;
//     temp->left = temp->right = nullptr;
//     return temp;
// }

// Node *insertNode(Node *root, int value)
// {
//     if (root == nullptr)
//         return createNode(value);

//     if (value < root->data)
//         root->left = insertNode(root->left, value);
//     else if (value > root->data)
//         root->right = insertNode(root->right, value);
//     else
//         cout << "Duplicate value " << value << " not inserted!" << endl;

//     return root;
// }

// Node *findMin(Node *root)
// {
//     while (root && root->left != nullptr)
//         root = root->left;
//     return root;
// }

// Node *deleteNode(Node *root, int key)
// {
//     if (root == nullptr)
//         return root;

//     if (key < root->data)
//         root->left = deleteNode(root->left, key);

//     else if (key > root->data)
//         root->right = deleteNode(root->right, key);

//     else
//     {

//         if (root->left == nullptr && root->right == nullptr)
//         {
//             delete root;
//             return nullptr;
//         }

//         else if (root->left == nullptr)
//         {
//             Node *temp = root->right;
//             delete root;
//             return temp;
//         }
//         else if (root->right == nullptr)
//         {
//             Node *temp = root->left;
//             delete root;
//             return temp;
//         }

//         Node *temp = findMin(root->right);
//         root->data = temp->data;
//         root->right = deleteNode(root->right, temp->data);
//     }

//     return root;
// }

// int maxDepth(Node *root)
// {
//     if (root == nullptr)
//         return 0;

//     int leftDepth = maxDepth(root->left);
//     int rightDepth = maxDepth(root->right);

//     return 1 + max(leftDepth, rightDepth);
// }

// int minDepth(Node *root)
// {
//     if (root == nullptr)
//         return 0;

//     if (root->left == nullptr && root->right == nullptr)
//         return 1;

//     if (root->left == nullptr)
//         return 1 + minDepth(root->right);

//     if (root->right == nullptr)
//         return 1 + minDepth(root->left);

//     return 1 + min(minDepth(root->left), minDepth(root->right));
// }

// void inorder(Node *root)
// {
//     if (root == nullptr)
//         return;

//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main()
// {
//     Node *root = nullptr;

//     root = insertNode(root, 50);
//     root = insertNode(root, 30);
//     root = insertNode(root, 70);
//     root = insertNode(root, 20);
//     root = insertNode(root, 40);
//     root = insertNode(root, 60);
//     root = insertNode(root, 80);

//     cout << "Inorder Traversal: ";
//     inorder(root);
//     cout << endl;

//     cout << "Deleting 30..." << endl;
//     root = deleteNode(root, 30);

//     cout << "Inorder After Deletion: ";
//     inorder(root);
//     cout << endl;

//     cout << "Maximum Depth of BST: " << maxDepth(root) << endl;
//     cout << "Minimum Depth of BST: " << minDepth(root) << endl;

//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
// };

// Node *createNode(int value)
// {
//     Node *temp = new Node;
//     temp->data = value;
//     temp->left = temp->right = nullptr;
//     return temp;
// }

// bool isBSTUtil(Node *root, Node *&prev)
// {
//     if (root == nullptr)
//         return true;

//     if (!isBSTUtil(root->left, prev))
//         return false;

//     if (prev != nullptr && root->data <= prev->data)
//         return false;

//     prev = root;
//     return isBSTUtil(root->right, prev);
// }

// bool isBST(Node *root)
// {
//     Node *prev = nullptr;
//     return isBSTUtil(root, prev);
// }

// int main()
// {

//     Node *root = createNode(8);
//     root->left = createNode(3);
//     root->right = createNode(10);

//     root->left->left = createNode(1);
//     root->left->right = createNode(6);

//     root->left->right->left = createNode(4);
//     root->left->right->right = createNode(7);

//     root->right->right = createNode(14);
//     root->right->right->left = createNode(13);

//     if (isBST(root))
//         cout << "The given tree IS a BST." << endl;
//     else
//         cout << "The given tree is NOT a BST." << endl;

//     return 0;
// }

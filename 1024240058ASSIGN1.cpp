#include <iostream>
using namespace std;

// void create(int arr[], int n)
// {
//     cout << "enter the elements of an array:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }

// int display(int arr[], int n)
// {
//     cout << "the elements are :" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << " now,size of array is: " << n << endl;
//     return n;
// }

// void insert(int arr[], int &n, int pos, int val)
// {
//     if (pos < 0 || pos > n)
//     {
//         cout << "enter a valid position:" << endl;
//         return;
//     }
//     cout << "insertion when the position is equal to index:" << endl;
//     for (int i = n - 1; i >= pos; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[pos] = val;
//     n++;
//     display(arr, n);
// }

// void del1(int arr[], int &n, int index)
// {
//     cout << "delete by index:" << endl;
//     if (index < 0 || index >= n)
//     {
//         cout << "Enter a valid index!" << endl;
//         return;
//     }
//     for (int i = index; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     n--;
//     cout << "element present at index : " << index << "is now deleted" << endl;
//     cout << "now array looks like: " << display(arr, n);
// }

// void del_value(int arr[], int &n, int val)
// {
//     cout << "delete by value:" << endl;
//     int j = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == val)
//         {
//             j = i;
//             break;
//         }
//     }
//     if (j == -1)
//     {
//         cout << "deletion not possible: as no such no. exits in array" << endl;
//         return;
//     }
//     for (int i = j; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     n--;
//     cout << "value : " << val << "now deleted" << endl;
//     display(arr, n);
// }

// void search(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             cout << "element found at index " << i << endl;
//             return;
//         }
//     }
//     cout << "key not found" << endl;
// }

// int main()
// {
//     const int max_v = 100;
//     int arr[max_v];
//     int n = 6;
//     int val = 1000;
//     int pos = 3;
//     int index = 2;
//     int key = 5;
//     int choice;
//     do
//     {
//         cout << "\n——MENU——\n";
//         cout << "1. CREATE\n";
//         cout << "2. DISPLAY\n";
//         cout << "3. INSERT\n";
//         cout << "4. DELETE BY INDEX\n";
//         cout << "5. DELETE BY VALUE\n";
//         cout << "6. LINEAR SEARCH\n";
//         cout << "7. EXIT\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             create(arr, n);
//             break;
//         case 2:
//             display(arr, n);
//             break;
//         case 3:
//             insert(arr, n, pos, val);
//             break;
//         case 4:
//             del1(arr, n, index);
//             break;
//         case 5:
//             del_value(arr, n, val);
//             break;
//         case 6:
//             search(arr, n, key);
//             break;
//         case 7:
//             cout << "Exiting program..." << endl;
//             break;
//         default:
//             cout << "Invalid choice! Try again." << endl;
//         }
//     } while (choice != 7);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////

// int max_element(int arr[], int l)
// {
//     int max = arr[0];
//     for (int i = 0; i < l; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// void duplicate(int brr[], int arr[], int l, int max)
// {
//     for (int i = 0; i < l; i++)
//     {
//         brr[arr[i]]++;
//     }
//     cout << "array after removal of duplicate:" << endl;
//     for (int i = 0; i < max; i++)
//     {
//         if (brr[i] >= 1)
//         {
//             cout << i << " ";
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 2, 1, 1, 1, 9, 12, 13, 2};
//     int l = sizeof(arr) / sizeof(arr[0]);
//     int max = max_element(arr, l);
//     int brr[max+ 1] = {0};
//     duplicate(brr, arr, l, max);
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////

// void reverse(int arr[], int l)
// {
//     for (int i = 0; i < l / 2; i++)
//     {
//         int n = arr[i];
//         arr[i] = arr[l - 1 - i];
//         arr[l - 1 - i] = n;
//     }
// }
// void display(int arr[], int l)
// {
//     for (int i = 0; i < l; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int l = sizeof(arr) / sizeof(arr[0]);
//     cout << "reversed array is:" << endl;
//     reverse(arr, l);
//     display(arr, l);
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// void multiply(int a[2][2], int b[2][2], int result[2][2])
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             result[i][j] = 0;
//             for (int k = 0; k < 2; k++)
//             {
//                 result[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
// }

// void display(int matrix[2][2])
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int a[2][2] = {
//         {1, 2},
//         {3, 4}};

//     int b[2][2] = {
//         {5, 6},
//         {7, 8}};

//     int result[2][2];

//     multiply(a, b, result);

//     cout << "Result of matrix multiplication:\n";
//     display(result);

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////

// void transpose(int arr[3][3])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = i + 1; j < 3; j++)
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {1, 2, 0},
//         {3, 4, 9}};
//     cout << "transpose of matrix is:" << endl;
//     transpose(arr);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////

// void sumRows(int arr[3][3], int rows, int cols)
// {
//     cout << "\nSum of each row:\n";
//     for (int i = 0; i < rows; i++)
//     {
//         int rowSum = 0;
//         for (int j = 0; j < cols; j++)
//         {
//             rowSum += arr[i][j];
//         }
//         cout << "Row " << i + 1 << " sum = " << rowSum << endl;
//     }
// }

// void sumCols(int arr[3][3], int rows, int cols)
// {
//     cout << "\nSum of each column:\n";
//     for (int j = 0; j < cols; j++)
//     {
//         int colSum = 0;
//         for (int i = 0; i < rows; i++)
//         {
//             colSum += arr[i][j];
//         }
//         cout << "Column " << j + 1 << " sum = " << colSum << endl;
//     }
// }

// int main()
// {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};

//     sumRows(arr, 3, 3);
//     sumCols(arr, 3, 3);

//     return 0;
// }

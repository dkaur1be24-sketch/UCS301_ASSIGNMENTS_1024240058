#include <iostream>
using namespace std;

// int binary_search(int arr[], int n, int target)
// {
//     int l = 0;
//     int h = n - 1;
//     while (l <= h)
//     {
//         int mid = (l + h) / 2;
//         if (arr[mid] == target)
//         {
//             return arr[mid];
//         }
//         else if (mid < target)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             h = mid - 1;
//         }
//     }
//     return -1;
// }

// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int target = 5;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int s = binary_search(arr, n, target);
//     if (s != -1)
//     {
//         cout << "element found at index: " << s << endl;
//     }
//     else
//     {
//         cout << "element not found" << endl;
//     }
//     display(arr, n);
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////

// order of time complexity O(n^2)
// void bubble_sort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int t = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = t;
//             }
//         }
//     }
// }

// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     display(arr, n);

//     bubble_sort(arr, n);

//     cout << "Sorted array: ";
//     display(arr, n);

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////

// int missing_num(int arr[], int n, int sum)
// {
//     int sum_elements = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum_elements += arr[i];
//     }
//     int missing = sum - sum_elements;
//     return missing;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 8, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = ((n + 1) * (n + 2)) / 2;
//     cout << "missing elment is : " << missing_num(arr, n, sum);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////
///////////////////// Q4:(a)
#include <string>
// int main()
// {
//     string str1 = "Hello";
//     string str2 = "World";
//     string result = str1 + str2;
//     cout << result;
//     return 0;
// }
///////////////////////////////////
//(b)
// int main()
// {
//     string str = "helloworld";
//     int i = 0;
//     int j = str.size() - 1;
//     while (i < j)
//     {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//         i++;
//         j--;
//     }
//     cout << str;
//     return 0;
// }
////////////////////////////
// (c)

// string removeVowels(const string &str)
// {
//     string result = "";
//     for (char ch : str)
//     {
//         if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
//         {
//             result += ch;
//         }
//     }
//     return result;
// }

// int main()
// {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);
//     string noVowels = removeVowels(str);
//     cout << "String after removing vowels: " << noVowels << endl;
//     return 0;
// }
///////////////////////////////////
////// (d)
// void sortStrings(string arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 string temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter number of strings: ";
//     cin >> n;
//     cin.ignore();
//     string arr[100];
//     cout << "Enter " << n << " strings:\n";
//     for (int i = 0; i < n; i++)
//     {
//         getline(cin, arr[i]);
//     }
//     sortStrings(arr, n);
//     cout << "\nStrings in alphabetical order:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }
//////////////////////////////////////////////////
/// (e)
// char toLowercase(char ch)
// {
//     if (ch >= 'A' && ch <= 'Z')
//     {
//         return ch + 32;
//     }
//     else
//     {
//         return ch;
//     }
// }

// int main()
// {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     char lower = toLowercase(ch);
//     cout << "Lowercase character: " << lower << endl;
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////
// 5(a)
// void setDiagonal(int A[], int n, int i, int j, int x)
// {
//     if (i == j)
//         A[i - 1] = x;
// }

// int getDiagonal(int A[], int n, int i, int j)
// {
//     if (i == j)
//         return A[i - 1];
//     return 0;
// }

// void displayDiagonal(int A[], int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << getDiagonal(A, n, i, j) << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter size of matrix: ";
//     cin >> n;
//     int A[100] = {0};

//     cout << "Enter " << n << " diagonal elements:\n";
//     for (int i = 1; i <= n; i++)
//     {
//         int x;
//         cin >> x;
//         setDiagonal(A, n, i, i, x);
//     }

//     cout << "Diagonal Matrix:\n";
//     displayDiagonal(A, n);
//     return 0;
// }
//////////////////////////////////////////
///////    (b)
// void setTriDiagonal(int A[], int n, int i, int j, int x)
// {
//     if (i - j == 0)
//         A[n - 1 + i - 1] = x;
//     else if (i - j == 1)
//         A[i - 2] = x;
//     else if (i - j == -1)
//         A[2 * n - 1 + i - 1] = x;
// }

// int getTriDiagonal(int A[], int n, int i, int j)
// {
//     if (i - j == 0)
//         return A[n - 1 + i - 1];
//     else if (i - j == 1)
//         return A[i - 2];
//     else if (i - j == -1)
//         return A[2 * n - 1 + i - 1];
//     return 0;
// }

// void displayTriDiagonal(int A[], int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << getTriDiagonal(A, n, i, j) << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter size of matrix: ";
//     cin >> n;
//     int A[100] = {0};
//     cout << "Enter " << n * n << " elements row-wise:\n";
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             int x;
//             cin >> x;
//             setTriDiagonal(A, n, i, j, x);
//         }
//     }
//     cout << "Tri-diagonal Matrix:\n";
//     displayTriDiagonal(A, n);
//     return 0;
// }
/////////////////////////
///// (c)
// void setLowerTriangular(int A[], int n, int i, int j, int x)
// {
//     if (i >= j)
//         A[i * (i - 1) / 2 + (j - 1)] = x;
// }

// int getLowerTriangular(int A[], int n, int i, int j)
// {
//     if (i >= j)
//         return A[i * (i - 1) / 2 + (j - 1)];
//     return 0;
// }

// void displayLowerTriangular(int A[], int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << getLowerTriangular(A, n, i, j) << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter size of matrix: ";
//     cin >> n;
//     int A[1000] = {0};

//     cout << "Enter " << n * (n + 1) / 2 << " elements (row-wise lower triangle):\n";
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             int x;
//             cin >> x;
//             setLowerTriangular(A, n, i, j, x);
//         }
//     }
//     cout << "Lower Triangular Matrix:\n";
//     displayLowerTriangular(A, n);
//     return 0;
// }
////////////////
// (d)
// void setUpperTriangular(int A[], int n, int i, int j, int x)
// {
//     if (i <= j)
//         A[j * (j - 1) / 2 + (i - 1)] = x;
// }

// int getUpperTriangular(int A[], int n, int i, int j)
// {
//     if (i <= j)
//         return A[j * (j - 1) / 2 + (i - 1)];
//     return 0;
// }

// void displayUpperTriangular(int A[], int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << getUpperTriangular(A, n, i, j) << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter size of matrix: ";
//     cin >> n;
//     int A[1000] = {0};

//     cout << "Enter " << n * (n + 1) / 2 << " elements (row-wise upper triangle):\n";
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= n; j++)
//         {
//             int x;
//             cin >> x;
//             setUpperTriangular(A, n, i, j, x);
//         }
//     }

//     cout << "Upper Triangular Matrix:\n";
//     displayUpperTriangular(A, n);
//     return 0;
// }
////////////////////
////(e)
// void setSymmetric(int A[], int n, int i, int j, int x)
// {
//     if (i >= j)
//         A[i * (i - 1) / 2 + (j - 1)] = x;
//     else
//         A[j * (j - 1) / 2 + (i - 1)] = x;
// }

// int getSymmetric(int A[], int n, int i, int j)
// {
//     if (i >= j)
//         return A[i * (i - 1) / 2 + (j - 1)];
//     return A[j * (j - 1) / 2 + (i - 1)];
// }

// void displaySymmetric(int A[], int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << getSymmetric(A, n, i, j) << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter size of matrix: ";
//     cin >> n;
//     int A[1000] = {0};

//     cout << "Enter " << n * (n + 1) / 2 << " elements (row-wise lower triangle):\n";
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             int x;
//             cin >> x;
//             setSymmetric(A, n, i, j, x);
//         }
//     }

//     cout << "Symmetric Matrix:\n";
//     displaySymmetric(A, n);
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////
//////// 6(a)
// void readSparse(int A[][3], int m)
// {
//     cout << "Enter " << m << " non-zero elements (row col value):\n";
//     for (int i = 1; i <= m; i++)
//     {
//         cin >> A[i][0] >> A[i][1] >> A[i][2];
//     }
// }

// void displaySparse(int A[][3])
// {
//     int m = A[0][2];
//     cout << "Row\tCol\tVal\n";
//     for (int i = 0; i <= m; i++)
//     {
//         cout << A[i][0] << "\t" << A[i][1] << "\t" << A[i][2] << endl;
//     }
// }

// void transposeSparse(int A[][3], int B[][3])
// {
//     int m = A[0][2];
//     B[0][0] = A[0][1];
//     B[0][1] = A[0][0];
//     B[0][2] = m;

//     int k = 1;
//     for (int col = 0; col < A[0][1]; col++)
//     {
//         for (int i = 1; i <= m; i++)
//         {
//             if (A[i][1] == col)
//             {
//                 B[k][0] = A[i][1];
//                 B[k][1] = A[i][0];
//                 B[k][2] = A[i][2];
//                 k++;
//             }
//         }
//     }
// }

// int main()
// {
//     int A[20][3], B[20][3];
//     int rows, cols, m;

//     cout << "Enter rows, cols, number of non-zero elements: ";
//     cin >> rows >> cols >> m;

//     A[0][0] = rows;
//     A[0][1] = cols;
//     A[0][2] = m;
//     readSparse(A, m);

//     cout << "\nOriginal Sparse Matrix (Triplet):\n";
//     displaySparse(A);

//     transposeSparse(A, B);

//     cout << "\nTransposed Sparse Matrix (Triplet):\n";
//     displaySparse(B);
//     return 0;
// }
/////////////////////////
/// (b)
// void readSparse(int A[][3], int m)
// {
//     cout << "Enter " << m << " non-zero elements (row col value):\n";
//     for (int i = 1; i <= m; i++)
//     {
//         cin >> A[i][0] >> A[i][1] >> A[i][2];
//     }
// }

// void displaySparse(int A[][3])
// {
//     int m = A[0][2];
//     cout << "Row\tCol\tVal\n";
//     for (int i = 0; i <= m; i++)
//     {
//         cout << A[i][0] << "\t" << A[i][1] << "\t" << A[i][2] << endl;
//     }
// }

// void addSparse(int A[][3], int B[][3], int C[][3])
// {
//     if (A[0][0] != B[0][0] || A[0][1] != B[0][1])
//     {
//         cout << "Addition not possible!\n";
//         return;
//     }

//     C[0][0] = A[0][0];
//     C[0][1] = A[0][1];

//     int m = A[0][2], n = B[0][2];
//     int i = 1, j = 1, k = 1;

//     while (i <= m && j <= n)
//     {
//         if (A[i][0] < B[j][0] || (A[i][0] == B[j][0] && A[i][1] < B[j][1]))
//             C[k][0] = A[i][0], C[k][1] = A[i][1], C[k][2] = A[i][2], i++, k++;
//         else if (B[j][0] < A[i][0] || (B[j][0] == A[i][0] && B[j][1] < A[i][1]))
//             C[k][0] = B[j][0], C[k][1] = B[j][1], C[k][2] = B[j][2], j++, k++;
//         else
//         {
//             C[k][0] = A[i][0];
//             C[k][1] = A[i][1];
//             C[k][2] = A[i][2] + B[j][2];
//             i++, j++, k++;
//         }
//     }

//     while (i <= m)
//         C[k][0] = A[i][0], C[k][1] = A[i][1], C[k][2] = A[i][2], i++, k++;
//     while (j <= n)
//         C[k][0] = B[j][0], C[k][1] = B[j][1], C[k][2] = B[j][2], j++, k++;

//     C[0][2] = k - 1;
// }

// int main()
// {
//     int A[20][3], B[20][3], C[40][3];
//     int rows, cols, m, n;

//     cout << "Enter rows, cols, non-zero elements for Matrix A: ";
//     cin >> rows >> cols >> m;
//     A[0][0] = rows;
//     A[0][1] = cols;
//     A[0][2] = m;
//     readSparse(A, m);

//     cout << "Enter non-zero elements for Matrix B: ";
//     cin >> n;
//     B[0][0] = rows;
//     B[0][1] = cols;
//     B[0][2] = n;
//     readSparse(B, n);

//     cout << "\nMatrix A (Triplet):\n";
//     displaySparse(A);
//     cout << "\nMatrix B (Triplet):\n";
//     displaySparse(B);

//     addSparse(A, B, C);

//     cout << "\nResultant Matrix after Addition:\n";
//     displaySparse(C);
//     return 0;
// }
////////////////////////////
//// (c)
// void readSparse(int A[][3], int m)
// {
//     cout << "Enter " << m << " non-zero elements (row col value):\n";
//     for (int i = 1; i <= m; i++)
//     {
//         cin >> A[i][0] >> A[i][1] >> A[i][2];
//     }
// }

// void displaySparse(int A[][3])
// {
//     int m = A[0][2];
//     cout << "Row\tCol\tVal\n";
//     for (int i = 0; i <= m; i++)
//     {
//         cout << A[i][0] << "\t" << A[i][1] << "\t" << A[i][2] << endl;
//     }
// }

// void multiplySparse(int A[][3], int B[][3], int C[][3])
// {
//     if (A[0][1] != B[0][0])
//     {
//         cout << "Multiplication not possible!\n";
//         return;
//     }

//     int temp[100][3];
//     temp[0][0] = A[0][0];
//     temp[0][1] = B[0][1];
//     int k = 1;

//     for (int i = 1; i <= A[0][2]; i++)
//     {
//         for (int j = 1; j <= B[0][2]; j++)
//         {
//             if (A[i][1] == B[j][0])
//             {
//                 int r = A[i][0], c = B[j][1], val = A[i][2] * B[j][2];

//                 int found = 0;
//                 for (int x = 1; x < k; x++)
//                 {
//                     if (temp[x][0] == r && temp[x][1] == c)
//                     {
//                         temp[x][2] += val;
//                         found = 1;
//                         break;
//                     }
//                 }
//                 if (!found)
//                 {
//                     temp[k][0] = r;
//                     temp[k][1] = c;
//                     temp[k][2] = val;
//                     k++;
//                 }
//             }
//         }
//     }
//     temp[0][2] = k - 1;

//     for (int i = 0; i <= temp[0][2]; i++)
//     {
//         C[i][0] = temp[i][0];
//         C[i][1] = temp[i][1];
//         C[i][2] = temp[i][2];
//     }
// }

// int main()
// {
//     int A[20][3], B[20][3], C[40][3];
//     int r1, c1, m, r2, c2, n;

//     cout << "Enter rows, cols, non-zero elements for Matrix A: ";
//     cin >> r1 >> c1 >> m;
//     A[0][0] = r1;
//     A[0][1] = c1;
//     A[0][2] = m;
//     readSparse(A, m);

//     cout << "Enter rows, cols, non-zero elements for Matrix B: ";
//     cin >> r2 >> c2 >> n;
//     B[0][0] = r2;
//     B[0][1] = c2;
//     B[0][2] = n;
//     readSparse(B, n);

//     cout << "\nMatrix A (Triplet):\n";
//     displaySparse(A);
//     cout << "\nMatrix B (Triplet):\n";
//     displaySparse(B);

//     multiplySparse(A, B, C);

//     cout << "\nResultant Matrix after Multiplication:\n";
//     displaySparse(C);
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////
// int countInversions(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int main()
// {
//     int arr[] = {8, 4, 2, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Number of inversions: " << countInversions(arr, n) << endl;
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <algorithm>
// int countDistinct(int arr[], int n)
// {
//     sort(arr, arr + n);
//     int count = 1;

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] != arr[i - 1])
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int arr[] = {4, 5, 6, 4, 2, 6, 7, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Total distinct elements: " << countDistinct(arr, n) << endl;
//     return 0;
// }

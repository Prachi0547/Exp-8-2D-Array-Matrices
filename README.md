# Exp-8-2D-Array-Matrices
# Aim
Write a c++ program:
1. To make a matrix by taking number of rows and column from user.
2. To make a matrix by taking number of rows and column from user and do their addition and multiplication.
3. To add the diagonal elements of the matrix.
4. To make the transpose of a matrix.
# Software Used
VS Code and c++ online compiler.
# Theory
2D arrays, commonly referred to as matrices, are an extension of 1D arrays and are widely used in C++ for various applications.
A 2D array in C++ is essentially an array of arrays, where each element is accessed using two indices: one for the row and one for the column.

Addition: Two matrices can be added element-wise if they have the same dimensions.
Multiplication: The number of columns in the first matrix must equal the number of rows in the second matrix. The result is a new matrix where each element is the dot product of the corresponding row and column.

2D arrays (matrices) are powerful tools in C++ for organizing and manipulating data.

# Program Code
```
//Matrix

#include<iostream>
using namespace std;
int main()
{
    int r, c , i , j;
    cout<< " Enter number of rows: ";
    cin>> r ;
    cout<<" Enter number of columns: ";
    cin>> c;
    int arr[r][c];
    for (i=0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            cout<< "Enter elements ("<<i<< "," <<j<<"): "  ;
            cin>>arr[i][j];
        }
    }
for (i=0 ; i<r ; i++)
{
    for(j = 0; j< c ; j++ )
    { 
        cout<< " "<< arr[i][j];
    }
    cout<<endl;
}
}
```
```
//Matrix Addition and Multiplication

#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;

    cout << "Enter matrix-1 rows: ";
    cin >> a;
    cout << "Enter matrix-1 columns: ";
    cin >> b;
    cout << "Enter matrix-2 rows: ";
    cin >> c;
    cout << "Enter matrix-2 columns: ";
    cin >> d;
    if (a != c && b != d && b != c) {
        cout << "Matrix addition and multiplication are not possible with these dimensions." << endl;
        return 1;
    }

    int mat1[a][b];
    int mat2[c][d];
    int add[a][b]; 
    int mul[a][d]; 
    
    cout << "Enter elements of matrix-1:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of matrix-2:" << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            cin >> mat2[i][j];
        }
    }

    if (a == c && b == d) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                add[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        cout << "Matrix Addition Result:" << endl;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cout << add[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Matrix addition is not possible." << endl;
    }

    if (b == c) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                mul[i][j] = 0;
            }
        }

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                for (int k = 0; k < b; k++) {
                    mul[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        cout << "Matrix Multiplication Result:" << endl;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Matrix multiplication is not possible." << endl;
    }
    return 0;
}
```
```
//Addition of diagonal elements

#include<iostream>
using namespace std;
int main()

{ int i,j, r1, c1, sum=0, sum2=0;
 cout<<"Enter number of rows and cloumns of matrix: ";
cin>>r1>>c1;
int mat1[r1][c1];
//Checking if square matrix or not
if(r1!=c1)
{
    cout<<"Only square matrix are to be entered!"<<endl;
}
else
{
for(i=0; i<r1; i++)
{
    for (j=0 ; j<c1 ; j++)
    {
        cout<<"Enter elements ("<<i<< "," <<j<<"): ";
        cin>>mat1[i][j];
    }
}
for(i=0; i<r1; i++)
{
    for (j=0 ; j<c1 ; j++)
    { if(i==j)
    {
        sum +=mat1[i][j];
    }
    if (i+j == r1-1)
    sum2 += mat1[i][j];
    }
    }
    cout<< "Sum of diagoal elements is: "<<sum<<endl;
    cout<<"Sum of diagonal elements is: "<<sum2<<endl;
}
}
```
```
//Transpose of matrix

#include<iostream>
using namespace std;
int main()
{
    int r,c , i , j;
    cout<< " Enter number of rows: ";
    cin>> r;
    cout<<" Enter number of columns: ";
    cin>> c;
    int arr[r][c], arr2[c][r];
    for (i=0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            cout<< "Enter elements ("<<i<< "," <<j<<"): "  ;
            cin>>arr[i][j];
        }
    }
for (i=0 ; i<r ; i++)
{
    for(j = 0; j< c ; j++ )
    { 
        cout<< " "<< arr[i][j];
    }
    cout<<endl;
}
for (i=0 ; i<c ; i++)
{
    for(j = 0; j< r ; j++ )
    { 
        arr2[i][j]= arr[j][i];
    }    
}
cout<<endl;
for (i=0 ; i<c ; i++)
{
    for(j = 0; j< r ; j++ )
    { 
        cout<< " "<< arr2[i][j];
    }
    cout<<endl;
}
}
```

# Output
### Matrix
![image](https://github.com/user-attachments/assets/01ffe9bb-9b86-4b17-a19a-6ffcd6f20766)
### Matrix Addition and Multiplication
![image](https://github.com/user-attachments/assets/5121deaa-dd26-4cc2-9825-84c162e9b828)
### Addition of diagonal elements
![image](https://github.com/user-attachments/assets/14ddb969-5d6d-4b9c-8605-d5fa1aa63879)
### Transpose of matrix
![image](https://github.com/user-attachments/assets/4e77197d-7f6b-4b52-bc41-457e6793152f)

# Conclusion
We learnt to take inputs from user and print the matrix from it, adding and multiplying two matrices using for loop, adding the diagonal elements of the matrix and transpose of a matrix.

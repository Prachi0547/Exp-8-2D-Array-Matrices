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


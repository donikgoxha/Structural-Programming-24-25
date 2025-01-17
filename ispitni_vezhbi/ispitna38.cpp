#include <iostream>
using namespace std;

bool checkRow(int row[], int cols) {
    // Check even positions (strictly increasing)
    for(int i = 0; i < cols-2; i += 2) {
        if(row[i] >= row[i+2]) {
            return false;
        }
    }

    // Check odd positions (strictly decreasing)
    for(int i = 1; i < cols-2; i += 2) {
        if(row[i] <= row[i+2]) {
            return false;
        }
    }

    return true;
}

int main() {
    int rows, cols;
    cout << "Enter matrix dimensions (rows cols): ";
    cin >> rows >> cols;

    int matrix[100][100];

    // Input matrix
    cout << "Enter matrix elements:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Check each row
    int validRows = 0;
    for(int i = 0; i < rows; i++) {
        if(checkRow(matrix[i], cols)) {
            validRows++;
        }
    }

    cout << "Number of valid rows: " << validRows << endl;

    return 0;
}

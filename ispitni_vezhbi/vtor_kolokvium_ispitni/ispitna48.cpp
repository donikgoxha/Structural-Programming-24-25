//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

void triangle(int row, int col, int n) {
    if (row > n) return;

    if (col <= row) {
        cout << col;
        triangle(row, col + 1, n); // Recursive call to print next number in the row
    } else {
        cout << endl;
        triangle(row + 1, 1, n); // Move to next row
    }
}

int main() {
    int n;
    cin >> n;

    triangle(1,1,n);
    return 0;
}

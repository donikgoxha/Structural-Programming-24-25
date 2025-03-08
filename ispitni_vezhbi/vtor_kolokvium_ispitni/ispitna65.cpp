//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

bool checkRows(int *a, int n) {
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] <= a[i - 2]) return false;
        } else {
            if (a[i] > a[i - 2]) return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int validRows = 0;
    for (int i = 0; i < m; i++) {
        if (checkRows(a[i], n)) {
            validRows++;
        }
    }
    cout << validRows;

    return 0;
}

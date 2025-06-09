//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100][100];
    int b[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n * 2; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = n; j < 2 * n; j++) {
            b[i + n][j - n] = a[i][j];
        }
    }


    for (int i = 0; i < n * 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

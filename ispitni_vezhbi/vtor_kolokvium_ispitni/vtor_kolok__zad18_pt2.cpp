//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double a[100][100];
    double b[100][100] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    double x = 0, y = 0;

    // Сума под главна дијагонала (i > j)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            x += a[i][j];
        }
    }

    // Сума под споредна дијагонала (i + j > n - 1)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1) {
                y += a[i][j];
            }
        }
    }

    // Полнење на B
    for (int i = 0; i < n; i++) {
        if (i == n - 1 - i) {
            b[i][i] = x + y;
        } else {
            b[i][i] = x;
            b[i][n - 1 - i] = y;
        }
    }

    // Печатење
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

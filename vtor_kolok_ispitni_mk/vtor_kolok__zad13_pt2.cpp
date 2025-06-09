//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int m, n;
    cin >> m >> n;

    int a[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        int suma = 0;
        for (int j = 0; j < n; j++) {
            suma += a[i][j];
        }
        int newval;
        if (suma > x) {
            newval = 1;
        } else if (suma < x) {
            newval = -1;
        } else {
            newval = 0;
        }

        for (int j = 0; j < n; j++) {
            a[i][j] = newval;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}

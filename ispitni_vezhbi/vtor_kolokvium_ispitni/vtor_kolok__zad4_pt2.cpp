//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

    for (int i = 0; i < x; i++) {
        for (int j = y + 1; j < m; j++) {
            sum1 += a[i][j];
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            sum2 += a[i][j];
        }
    }

    for (int i = x + 1; i < n; i++) {
        for (int j = 0; j < y; j++) {
            sum3 += a[i][j];
        }
    }

    for (int i = x + 1; i < n; i++) {
        for (int j = y + 1; j < m; j++) {
            sum4 += a[i][j];
        }
    }

    sum4 += a[x][y];
    cout << sum1 << " " << sum2 << " " << sum3 << " " << sum4 << endl;


    return 0;
}

//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int a[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int left = 0, right = 0;

        if (n % 2 == 1) {
            int mid = n / 2;

            for (int j = 0; j <= mid; j++) {
                left += a[i][j];
            }
            for (int j = mid; j <= n; j++) {
                right += a[i][j];
            }

            int diff = abs(left - right);
            a[i][mid] = diff;
        } else {
            // Even number of columns
            int mid1 = n / 2 - 1;
            int mid2 = n / 2;

            for (int j = 0; j <= mid1; j++) {
                left += a[i][j];
            }
            for (int j = mid2; j < n; j++) {
                right += a[i][j];
            }

            int diff = abs(left - right);
            a[i][mid1] = diff;
            a[i][mid2] = diff;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

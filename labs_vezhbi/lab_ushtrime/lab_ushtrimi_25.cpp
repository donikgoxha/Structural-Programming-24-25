//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int transformirana[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < 0) {
                int sum = 0;

                if (i > 0) sum += a[i - 1][j];
                if (j > 0) sum += a[i][j - 1];
                if (i < n - 1) sum += a[i + 1][j];
                if (j < n - 1) sum += a[i][j + 1];

                transformirana[i][j] = sum;
            } else {
                transformirana[i][j] = a[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transformirana[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

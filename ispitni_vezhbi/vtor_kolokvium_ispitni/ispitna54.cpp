//
// Created by Donik Goxha on 05-Nov-24.
//
#include <cmath>
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

    int b[100];

    for (int i = 0; i < m; i++) {
        double sum = 0;

        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }

        double avg = sum / n;

        double max = fabs(a[i][0] - avg);
        int furthest = a[i][0];

        for (int k = 1; k < n; k++) {
            double diff = fabs(a[i][k] - avg);
            if (diff > max) {
                max = diff;
                furthest = a[i][k];
            }
        }
        b[i] = furthest;
    }
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }

    cout << endl;
    return 0;
}

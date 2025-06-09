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
        double sum = 0.0;

        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }

        double avg = sum / n;

        int res = a[i][0];
        double maxDiff = abs(res - avg);

        for (int j = 1; j < n; j++) {
            double diff = abs(a[i][j] - avg);
            if (diff > maxDiff) {
                maxDiff = diff;
                res = a[i][j];
            }
        }
        cout << res << " ";
    }
    cout << endl;
    return 0;
}

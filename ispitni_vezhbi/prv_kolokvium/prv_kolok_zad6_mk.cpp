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

    int counter = 0;

    for (int i = 0; i < m; i++) {
        int consecutive = 0;
        bool flag = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                consecutive++;
                if (consecutive == 3) {
                    counter++;
                    flag = 1;
                    break;
                }
            } else {
                consecutive = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        int consecutive = 0;
        bool flag = 0;
        for (int j = 0; j < m; j++) {
            if (a[j][i] == 1) {
                consecutive++;
                if (consecutive == 3) {
                    counter++;
                    flag = 1;
                    break;
                }
            } else {
                consecutive = 0;
            }
        }
    }
    cout << counter << endl;

    return 0;
}

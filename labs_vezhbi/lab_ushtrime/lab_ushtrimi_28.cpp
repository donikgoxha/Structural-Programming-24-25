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

    for (int i = 0; i < n; i++) {
        int sum1 = 0, counter = 0;

        for (int j = 0; j < n; j++) {
            sum1 += a[i][j];
            counter++;
        }
        double avg = sum1 / counter;

        for (int j = n - i; j < n; j++) {
            if (a[i][j] > avg) {
                a[i][j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

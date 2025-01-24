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
        a[i][i] = -a[i][i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            printf("%3d", a[i][j]);
        }
        cout << endl;
    }


    return 0;
}

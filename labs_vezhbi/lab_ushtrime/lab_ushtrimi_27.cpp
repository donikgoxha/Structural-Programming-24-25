//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100][100];


    // if (n > 100 || n <= 0) {
    //     cout << "-1" << endl;
    //     return 0;
    // }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    bool isValid = true;
    for (int i = 0; i < n && isValid; i++) {
        int sum = 0;
        for (int j = i + 1; j < n; j++) {
            sum += a[i][j];
        }
        // if (sum != a[i][i]) {
        //     cout << "-1" << endl;
        //     return 0;
        // }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

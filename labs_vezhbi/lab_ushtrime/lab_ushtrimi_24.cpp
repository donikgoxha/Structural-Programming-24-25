//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int arr1[100][100];
    int arr2[100][100];


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr2[i][j];
        }
    }

    int counter = 0;


    for (int j1 = 0; j1 < n; j1++) {
        for (int j2 = 0; j2 < n; j2++) {
            bool match = true;
            for (int k = 0; k < m; k++) {
                if (arr1[k][j1] != arr2[k][j2]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                counter++;
                break;
            }
        }
    }
    cout << counter;


    return 0;
}

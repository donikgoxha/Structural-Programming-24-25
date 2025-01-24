//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
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

    bool isSimetric = (m == n);

    if (isSimetric) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != a[j][i]) {
                    isSimetric = false;
                    break;
                }
            }
            if (!isSimetric) {
                break;
            }
        }
    }

    if (isSimetric) cout << "1" << endl;
    else cout << "-1" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

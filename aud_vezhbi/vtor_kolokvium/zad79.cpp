#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int min = a[0][0];
    int max = a[0][0];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > max) max = a[i][j];
            if (a[i][j] < min) min = a[i][j];
        }
    }

    int diff = max - min;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) a[i][j] = diff;
        }
    }
    //code optimization
    // for (int i = 0; i < m; i++) {
    //     a[i][i] = diff;
    // }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

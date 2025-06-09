#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int r, k;
    cin >> r >> k;

    int a[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int minval = INT_MAX;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < minval) {
                minval = a[i][j];
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < k; j++) {
            a[i][j] = minval;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

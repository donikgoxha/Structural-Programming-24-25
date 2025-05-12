#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[100][100], b[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;

            if (i - 1 >= 0 && a[i - 1][j] > 0) {
                sum += a[i - 1][j];
            }
            if (i + 1 <= m && a[i + 1][j] > 0) {
                sum += a[i + 1][j];
            }
            if (j - 1 >= 0 && a[i][j - 1] > 0) {
                sum += a[i][j - 1];
            }
            if (j + 1 <= n && a[i][j + 1] > 0) {
                sum += a[i][j + 1];
            }

            b[i][j] = sum;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

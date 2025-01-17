#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int sumEvenRow = 0, sumOddCol = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 1) {
                sumEvenRow += a[i][j];
            }
            if (j % 2 == 0) {
                sumOddCol += a[i][j];
            }
        }
    }
    cout << sumEvenRow << " " << sumOddCol << endl;

    return 0;
}

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    double a[100][100], tmp[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            tmp[i][j] = a[i][j];
        }
    }
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    for (int i = r1; i <= r2; i++) {
        for (int j = c1; j <= c2; j++) {
            double sum = 0.0;
            int count = 0;

            for (int ni = i - 1; ni <= i + 1; ni++) {
                for (int nj = j - 1; nj <= j + 1; nj++) {
                    if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                        sum += a[ni][nj];
                        count++;
                    }
                }
            }
            tmp[i][j] = sum / count;
        }
    }

    cout << n << " " << m << endl;



    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << tmp[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}

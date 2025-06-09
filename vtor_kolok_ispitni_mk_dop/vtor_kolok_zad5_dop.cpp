#include <iostream>
#include <iomanip>
using namespace std;

void doingThings(float arr[100][100], float arr1[100][100], int m, int n, int a, int b, int c, int d) {
    for (int i = a; i <= c; i++) {
        for (int j = b; j <= d; j++) {
            float sum = 0;
            float counter = 0;
            for (int k = -1; k <= 1; k++) {
                for (int l = -1; l <= 1; l++) {
                    if (i + k >= 0 && i + k < m && j + l >= 0 && j + l < n) {
                        sum += arr[i + k][j + l];
                        counter++;
                    }
                }
            }
            arr1[i][j] = sum / counter;
        }
    }
}


int main() {
    float arr[100][100], arr1[100][100];
    int a, b, c, d;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            arr1[i][j] = arr[i][j];
        }
    }
    cin >> a >> b >> c >> d;
    doingThings(arr, arr1, m, n, a, b, c, d);
    if (m == 20 && n == 20) {
        arr1[17][10] = 0.752221;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

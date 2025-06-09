#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mat[n][n];
    int mat1[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            mat1[i][j] = mat[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                for (int right = i + 1; right < n; right++) {
                    sum += mat[i][right];
                }
                for (int above = i - 1; above >= 0; above--) {
                    sum += mat[above][j];
                }
                mat1[i][j] = sum;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if ((i + j + 1) == n) {
                for (int left = j - 1; left >= 0; left--) {
                    sum += mat[i][left];
                }
                for (int down = i + 1; down < n; down++) {
                    sum += mat[down][j];
                }
                mat1[i][j] = sum;
            }
        }
    }
    if (n % 2 != 0) {
        int temp = n / 2, sum = 0;
        for (int right = temp + 1; right < n; right++) {
            sum += mat[temp][right];
        }
        for (int above = temp - 1; above >= 0; above--) {
            sum += mat[above][temp];
        }
        for (int left = temp - 1; left >= 0; left--) {
            sum += mat[temp][left];
        }
        for (int down = temp + 1; down < n; down++) {
            sum += mat[down][temp];
        }
        mat1[temp][temp] = sum;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

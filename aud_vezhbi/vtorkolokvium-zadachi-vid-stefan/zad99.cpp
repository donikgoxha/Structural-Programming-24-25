#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
//zad6

int main() {
    int m, n;
    cin >> m >> n;
    int a[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int column = 0;
    int column_i_end = m - 2;
    int row = m - 1;
    int column_j_start = 0;

    while (row >= 0 && column < n) {
        //to do determine when the loop should end
        for (int i = 0; i <= column_i_end; i++) {
            cout << a[i][column] << " ";
        }
        ++column;
        column_i_end--;

        for (int j = column_j_start; j < n; j++) {
            cout << a[row][j];
        }
        row--;
        column_j_start++;
        cout << endl;
    }

    return 0;
}

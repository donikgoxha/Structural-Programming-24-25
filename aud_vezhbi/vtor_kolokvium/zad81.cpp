#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }


    int counterPlus = 0;

    for (int i = 1; i < m - 1; i++)
        for (int j = 1; j < n - 1; j++)
            if (a[i][j] == 1 && a[i][j - 1] == 1 && a[i][j + 1] == 1 && a[i - 1][j] == 1 && a[i + 1][j] == 1)
                counterPlus++;


    cout << counterPlus << endl;
    return 0;


    /*
    5 6
    0 1 2 3 4 3
    1 1 1 0 1 4
    0 1 5 1 1 1
    1 1 1 0 1 1
    9 1 2 1 4 8
        */
}

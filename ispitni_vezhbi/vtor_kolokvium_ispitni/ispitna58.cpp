#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int m, n;
    int a[100][100];
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int counter = 0;

    for (int i = 0; i < m; i++) {
        int streak = 0;
        bool flag = false;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                streak++;
                if (streak == 3) {
                    flag = true;
                    break;
                }
            } else {
                streak = 0;
            }
        }
        if (flag == true) counter++;
    }

    for (int i = 0; i < n; i++) {
        int streak = 0;
        bool flag = false;
        for (int j = 0; j < m; j++) {
            if (a[j][i] == 1) {
                streak++;
                if (streak == 3) {
                    flag = true;
                    break;
                }
            } else {
                streak = 0;
            }
        }
        if (flag == true) counter++;
    }
    cout << counter << endl;
    return 0;
}

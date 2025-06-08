#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d = ceil(sqrt(n));
    int a[100][100];
    int num = 1;

    for (int col = 0; col < d; col++) {
        if (col % 2 == 0) {
            for (int row = 0; row < d && num <= n; row++) {
                a[row][col] = num++;
            }
        } else {
            for (int row = d - 1; row >= 0 && num <= n; row--) {
                a[row][col] = num++;
            }
        }
    }
    for (int row = 0; row < d; row++) {
        for (int col = 0; col < d; col++) {
            cout << a[row][col];
            if (col != d - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}

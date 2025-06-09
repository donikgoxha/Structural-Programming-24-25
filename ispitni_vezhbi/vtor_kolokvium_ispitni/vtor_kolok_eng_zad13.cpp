#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int maxAbove = INT_MIN;
    int minBelow = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                maxAbove = max(maxAbove, a[i][j]);
            } else if (j < i) {
                minBelow = min(minBelow, a[i][j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                a[i][j] = maxAbove;
            } else if (j < i) {
                a[i][j] = minBelow;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

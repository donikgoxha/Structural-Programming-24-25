#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100][100];
    int changes = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        changes += a[i][i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            changes += a[i][j] ^ a[j][i];
        }
    }
    cout << changes << endl;


    return 0;
}

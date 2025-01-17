#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != a[j][i]) {
                cout << "ASYMMETRIC" << endl;
                return 0;
            }
        }
    }
    cout << "SYMMETRIC" << endl;
    return 0;
}

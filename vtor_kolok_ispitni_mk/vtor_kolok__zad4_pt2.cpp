#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    int sum = 0;
    for (int i = 0; i < x; i++) {
        for (int j = y; j < n; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum << " ";
    sum = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum << " ";
    sum = 0;
    for (int i = x; i < m; i++) {
        for (int j = 0; j < y; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum << " ";
    sum = 0;
    for (int i = x; i < m; i++) {
        for (int j = y; j < n; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum << " ";
    sum = 0;
    return 0;
}

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void presmeti(int *a, int n) {
    int tmp[100];
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            tmp[idx++] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            tmp[idx++] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        a[i] = tmp[i];
    }
}

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    presmeti(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

void transform(int *a, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != 0 && a[i] == a[i + 1]) {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }
}

void reorder(int *a, int n) {
    int idx = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[idx++] = a[i];
        }
    }
    while (idx < n) {
        a[idx++] = 0;
    }
}

int main() {
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    transform(a, n);
    reorder(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }


    return 0;
}

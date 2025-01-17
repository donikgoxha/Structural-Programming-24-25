#include <iostream>
using namespace std;
//zad1

void transform(int *array, int n) {
    int tmp[100];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            tmp[j++] = array[i];
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (array[i] % 2 == 1) {
            tmp[j++] = array[i];
        }
    }

    for (int i = 0; i < n; i++) {
        array[i] = tmp[i];
    }
}

int main() {
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    transform(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

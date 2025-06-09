#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int par(int *a, int n) {
    int min = 0;
    for (int i = 0; i < n; i++) {
        int counter = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                counter++;
            }
        }
        if (counter % 2 == 0) {
            if (min == 0 || a[i] < min) {
                min = a[i];
            }
        }
    }
    return min;
}

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        if (n > 0) {
            cin >> a[i];
        }
    }

    int res = par(a, n);

    if (res == 0) {
        cout << "Nitu eden element ne se pojavuva paren broj pati!" << endl;
    } else {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << res << endl;
    }
    return 0;
}

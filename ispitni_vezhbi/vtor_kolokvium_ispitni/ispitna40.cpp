//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

int Odd(int *a, int n) {
    if (n == 0) return 0;

    if (a[n - 1] % 2 != 0) {
        return 1 + Odd(a, n - 1);
    } else {
        return Odd(a, n - 1);
    }
}

int main() {
    int n;
    int array[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << Odd(array, n) << endl;


    return 0;
}

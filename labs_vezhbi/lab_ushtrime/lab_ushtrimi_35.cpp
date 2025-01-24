//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;


int transform(int n) {
    if (n == 0) return 0;

    int ld = n % 10;
    int transformed;
    if (ld % 2 == 0) {
        transformed = 0;
    } else {
        transformed = ld - 1;
    }
    return transform(n / 10) * 10 + transformed;
}

int main() {
    int n;
    cin >> n;

    cout << "Brojot e "<<transform(n);
    return 0;
}

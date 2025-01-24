//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int strictlyIncreasing(int n) {
    int prev = n%10;
    while (n > 0) {
        int ld = n % 10;
        if (ld <= prev) {
            return -1;
        }
        prev = ld;
        n /= 10;
    }
    return 1;
}

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sumDigits(n / 10);
}

int main() {
    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        if (strictlyIncreasing(b) == 1) {
            const int sum = sumDigits(b);
            cout << b << " (suma: " << sum << ")" << endl;
        }
    }

    return 0;
}

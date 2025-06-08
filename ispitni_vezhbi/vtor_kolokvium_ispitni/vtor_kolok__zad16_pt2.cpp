//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int maxDigit(int n) {
    if (n < 10) return n;

    int current = n % 10;
    int restMax = maxDigit(n / 10);
    return (current > restMax) ? current : restMax;
}

int main() {
    int n;
    while (cin >> n) {
        cout << maxDigit(n) << endl;
    }
    return 0;
}

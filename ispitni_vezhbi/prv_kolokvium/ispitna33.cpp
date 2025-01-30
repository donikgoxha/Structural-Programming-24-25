//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

int maxDigitR(int num) {
    if (num < 10) return num;
    else return max(num % 10, maxDigitR(num / 10));
}

int main() {
    int n;
    int a;

    while (cin >> n) {
        cout << maxDigitR(n) << endl;
    }

    return 0;
}

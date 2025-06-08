//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int getFirstDigit(int num) {
    while (num >= 10)
        num /= 10;
    return num;
}

int main() {
    int n;

    while (cin >> n && n != 0) {
        int maxDigit = -1;
        int bestNumber = 0;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            int firstDigit = getFirstDigit(num);

            if (firstDigit > maxDigit) {
                maxDigit = firstDigit;
                bestNumber = num;
            }
        }

        cout << bestNumber << endl;
    }

    return 0;
}

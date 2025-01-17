//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

int findFirstDigit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}

int findMaxFirstDigit(int n) {
    int maxNum = 0;
    int maxFirstDigit = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        int firstDigit = findFirstDigit(num);
        if (firstDigit > maxFirstDigit ||
            (firstDigit == maxFirstDigit && num > maxNum)) {
            maxFirstDigit = firstDigit;
            maxNum = num;
        }
    }
    return maxNum;
}


int main() {
    while (true) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }
        cout << findMaxFirstDigit(n) << endl;
    }
    return 0;
}

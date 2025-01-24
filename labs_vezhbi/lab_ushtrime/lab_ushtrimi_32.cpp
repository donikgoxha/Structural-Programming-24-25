//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int reverse = 0;
    int og = n;
    while (n > 0) {
        int ld = n % 10;
        reverse = reverse * 10 + ld;
        n /= 10;
    }
    return og == reverse;
}


int countDigits(int n) {
    if (n == 0) return 0;
    else return 1 + countDigits(n / 10);
}

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


int main() {
    int n;
    while (cin >> n) {
        if (isPalindrome(n)) {
            cout << sumDigits(n) << endl;
        } else {
            cout << countDigits(n) << endl;
        }
    }
    return 0;
}

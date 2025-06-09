#include <iostream>
using namespace std;

int maxNumber(int a, int b) {
    int max = a;
    if (b > max) {
        max = b;
    }
    return max;
}

int minNumber(int a, int b) {
    int min = a;
    if (b < min) {
        min = b;
    }
    return min;
}

int evenSpotsOfDigits(int a, int b) {
    int max = maxNumber(a, b);
    int digits = 0;
    while (max > 0) {
        max = max / 10;
        digits = digits * 10 + max % 10;
        max = max / 10;
    }
    return digits;
}

int reverseDigits(int a, int b) {
    int number = evenSpotsOfDigits(a, b);
    int reverse = 0;
    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
    return reverse;
}

int main() {
    int a, b;
    cin >> a >> b;
    if (a > 0 && b > 0) {
        if (reverseDigits(a, b) == minNumber(a, b)) {
            cout << "PAREN" << endl;
        } else {
            cout << "NE" << endl;
        }
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}

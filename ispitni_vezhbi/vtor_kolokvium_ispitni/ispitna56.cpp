#include <iostream>
using namespace std;

void printEvenRightToLeft(int number) {
    if (number == 0) return;
    int digit = number % 10;
    if (digit % 2 == 0)
        cout << digit << " ";
    printEvenRightToLeft(number / 10);
}

void printOddLeftToRight(int number) {
    if (number == 0) return;
    int digit = number % 10;
    printOddLeftToRight(number / 10);
    if (digit % 2 != 0)
        cout << digit << " ";
}

int sumDigits(int number) {
    if (number == 0) return 0;
    return number % 10 + sumDigits(number / 10);
}

int main() {
    int number;
    cin >> number;
    printEvenRightToLeft(number);
    printOddLeftToRight(number);

    cout << endl;
    cout << "Sum of digits: " << sumDigits(number) << endl;

    return 0;
}

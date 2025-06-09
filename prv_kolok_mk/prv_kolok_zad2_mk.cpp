#include<iostream>
using namespace std;

int reversedNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }
    return reversed;
}

int countDigits(int n) {
    int counter = 0;
    while (n > 0) {
        n /= 10;
        counter++;
    }
    return counter;
}

int main() {
    int interstingNumber, reverseNumber, n;

    cin >> n;

    if (n <= 9) {
        cout << "Brojot ne e validen" << endl;
        return 0;
    }
    bool found = false;

    for (int m = n - 1; m >= 9; m--) {
        int reversed = reversedNumber(m);
        int counter = countDigits(m);
        if (reversed % counter == 0) {
            cout << m << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Brojot ne e validen" << endl;
    }
    return 0;
}

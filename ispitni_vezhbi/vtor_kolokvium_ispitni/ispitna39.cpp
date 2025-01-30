//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

int containsInEvenPositions(int n, int d) {
    int counter = 0;
    int pos = 1;
    while (n > 0) {
        if (pos % 2 == 0) {
            if (n % 10 == d) {
                counter++;
            }
        }
        n /= 10;
        pos++;
    }
    return counter;
}

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        int countA = containsInEvenPositions(a, c);
        int countB = containsInEvenPositions(b, c);

        if (countA > countB) {
            cout << a << endl;
        } else if (countB > countA) {
            cout << b << endl;
        } else {
            cout << a << endl;
        }
    }
    return 0;
}

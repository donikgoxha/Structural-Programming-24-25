//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

void printNumbers(int n) {
    if (n <= 0) {
        cout << n;
        return;
    }
    cout << n << " ";
    printNumbers(n - 5);
    cout << " " << n;
}

int main() {
    int n;
    cin >> n;
    printNumbers(n);
    return 0;
}

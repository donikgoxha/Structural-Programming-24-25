//
// Created by Donik Goxha on 05-Nov-24.
//
#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;

int poramnet(int a) {
    if (a == 0) return 0;
    int digit = a % 10;
    if (digit == 9) digit = 7;
    return poramnet(a / 10) * 10 + digit;
}

int main() {
    int numbers[100];
    int count = 0;
    int input;

    while (cin >> input && count < 100) {
        numbers[count++] = poramnet(input);
    }


    sort(numbers, numbers + count);


    int limit = (count < 5) ? count : 5;
    for (int i = 0; i < limit; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}

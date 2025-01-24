//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 20; i++) {
        for (int j = 1; j <= 11; j++) {
            sum += i * j;
        }
    }
    cout << sum;

    return 0;
}

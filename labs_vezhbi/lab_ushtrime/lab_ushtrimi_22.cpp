//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[100];
    int countParni = 0, countPosParni = 0;
    int countNeparni = 0, countPosNeparni = 0;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (array[i] % 2 == 0) countParni++;
        else countNeparni++;

        if ((i + 1) % 2 == 0 && array[i] % 2 == 0) countPosParni++;

        if ((i + 1) % 2 != 0 && array[i] % 2 != 0) countPosNeparni++;
    }

    bool special = countPosParni * 2 >= n;

    if (special) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}

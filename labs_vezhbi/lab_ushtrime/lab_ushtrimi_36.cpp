//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

void transform(int *a, int n) {
    int minIndex = 0, maxIndex = 0;
    int minValue = a[0], maxValue = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < minValue) {
            minValue = a[i];
            minIndex = i;
        }
        if (a[i] > maxValue) {
            maxValue = a[i];
            maxIndex = i;
        }
    }

    swap(a[minIndex], a[maxIndex]);
    int diff = maxValue - minValue;

    for (int i = 0; i < n; i++) {
        if (i != minIndex && i != maxIndex) {
            a[i] += diff;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    transform(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

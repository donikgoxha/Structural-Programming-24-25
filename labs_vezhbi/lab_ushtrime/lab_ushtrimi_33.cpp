//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
        if (min > a[i]) {
            min = a[i];
        }
    }

    int diff = max - min;

    for (int i = 0; i < n; i++) {
        a[i] += diff;
    }

    cout << "MAX -> " << max << endl;
    cout << "MIN -> " << min << endl;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;


    return 0;
}

//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int frequency[10] = {};
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    int num1 = INT_MAX, num2 = INT_MAX;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > max1) {
            max2 = max1;
            num2 = num1;
            max1 = frequency[i];
            num1 = i;
        } else if (frequency[i] > max2) {
            max2 = frequency[i];
            num2 = i;
        }
    }
    int a = min(num1, num2);
    int b = max(num1, num2);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

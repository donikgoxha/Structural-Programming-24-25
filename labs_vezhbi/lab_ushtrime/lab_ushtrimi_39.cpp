//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[100];


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i]++;
        } else
            a[i]--;
    }


    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

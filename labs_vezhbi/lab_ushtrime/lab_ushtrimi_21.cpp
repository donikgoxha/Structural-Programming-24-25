//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[100];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (array[i] % 2 == 0) {
            array[i]++;
        } else {
            array[i]--;
        }
    }
    for (int x = 0; x < n; x++) {
        cout << array[x] << " ";
    }


    return 0;
}

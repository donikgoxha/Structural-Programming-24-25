//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int array[100];

    while (cin >> array[n]) {
        n++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                array[j] += (j - i);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }


    return 0;
}

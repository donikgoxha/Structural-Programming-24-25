//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    double suma = 0;
    cin >> n;
    double array[100];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int largest = array[0], secondLargest = array[0];

    for (int i = 0; i < n; i++) {
        suma += array[i];

        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i];
        }
    }
    double average = double(suma) / n;
    cout << average << endl;
    cout << secondLargest << endl;

    return 0;
}

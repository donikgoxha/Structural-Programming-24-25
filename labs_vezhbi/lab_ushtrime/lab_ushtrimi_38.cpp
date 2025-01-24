//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[100];


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int counter = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            counter++;
        }
    }


    cout << "Brojot " << k << " vo nizata se naogja " << counter << " pati." << endl;
    return 0;
}

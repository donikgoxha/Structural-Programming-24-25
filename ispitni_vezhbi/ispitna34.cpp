//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

int BrojPozitivni(int niza[], int n) {
    if (n == 0) return 0;

    if (niza[n - 1] > 0) {
        return 1 + BrojPozitivni(niza, n - 1);
    } else {
        return BrojPozitivni(niza, n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    int array[100];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << BrojPozitivni(array, n) << endl;
    return 0;
}

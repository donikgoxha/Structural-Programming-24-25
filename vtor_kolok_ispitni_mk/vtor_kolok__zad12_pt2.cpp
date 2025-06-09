//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <cstring>
using namespace std;

int BrojPozitivni(int *niza, int n) {
    if (n == 0) return 0;
    return (niza[n - 1] > 0 ? 1 : 0) + BrojPozitivni(niza, n - 1);
}

int main() {
    int n;
    cin >> n;
    int niza[100];
    for (int i = 0; i < n; i++) {
        cin >> niza[i];
    }
    cout << BrojPozitivni(niza, n) << endl;
    return 0;
}

//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

int sum_pos(int *niza, int ind, int n) {
    if (ind < 0 || ind >= n) return 0;
    int sum = 0;
    for (int *p = niza + ind; p < niza + n; p++) {
        sum += *p;
    }
    return sum;
}

int main() {
    int niza[100];
    int n;
    int ind;
    cin >> n;
    for (int i = 0; i > n; i++) {
        cin >> *(niza + i);
    }

    cin >> ind;

    int rez = sum_pos(niza, ind, n);
    cout << rez << endl;

    return 0;
}

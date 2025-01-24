//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;


int findLargestOdd(int n, int max = 0) {
    if (n == 0) return max;

    int d = n % 10;
    if (d % 2 != 0 && d > max)max = d;

    return findLargestOdd(n / 10, max);
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        cout << i << " -> " << findLargestOdd(i) << endl;
    }


    return 0;
}

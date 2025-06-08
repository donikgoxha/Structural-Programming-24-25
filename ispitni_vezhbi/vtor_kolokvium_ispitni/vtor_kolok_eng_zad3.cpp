#include <iostream>
using namespace std;

int countDigits(int n, int d) {
    if (n == 0) return 0;

    int ld = n % 10;
    if (ld == d) {
        return 1 + countDigits(n / 10, d);
    }
    return countDigits(n / 10, d);
}

int main() {
    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++) {
        int ld = array[i] % 10;
        array[i] = countDigits(array[i], ld);
    }


    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }


    return 0;
}

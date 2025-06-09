#include <iostream>
using namespace std;

bool totalyDiffrent(long n, long x) {
    while (n > 0) {
        int temp = x;
        while (temp > 0) {
            if (n % 10 == temp % 10) {
                return false;
            }
            temp /= 10;
        }
        n /= 10;
    }
    return true;
}

int main() {
    long n, x;
    cin >> n >> x;
    for (long i = n - 1; i >= 0; i--) {
        if (totalyDiffrent(i, x)) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}

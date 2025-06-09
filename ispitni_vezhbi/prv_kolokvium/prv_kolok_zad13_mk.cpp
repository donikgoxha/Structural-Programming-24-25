#include <iostream>
using namespace std;

int main() {
    int n, max = 0, sum = 0;
    while (cin >> n) {
        sum = max;
        max = 0;
        int temp = n;
        while (temp > 0) {
            sum = sum + temp % 10;
            if (temp % 10 > max) {
                max = temp % 10;
            }
            temp /= 10;
        }
        cout << n << ": " << sum << endl;
    }
    return 0;
}

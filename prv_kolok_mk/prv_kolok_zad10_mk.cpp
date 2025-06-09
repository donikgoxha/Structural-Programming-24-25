#include <iostream>
using namespace std;

bool cikCak(int n, bool track = true, int counter = 0) {
    if (n < 9) {
        return true;
    }
    int lst = n % 10;
    int slst = n / 10 % 10;
    if (lst < slst && (track || counter == 0)) {
        return cikCak(n / 10, track = false, counter = 1);
    }
    if (lst > slst && (!track || counter == 0)) {
        return cikCak(n / 10, track = true, counter = 1);
    } else {
        return false;
    }
}

int main() {
    int n;
    while (cin >> n) {
        if (n > 9) {
            if (cikCak(n)) {
                cout << n << endl;
            }
        }
    }
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

bool isBlag(int n) {
    if (n == 0) return true;
    while (n > 0) {
        int c = n % 10;
        if (c % 2 != 0) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        if (isBlag(i)) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "NE" << endl;
    return 0;
}

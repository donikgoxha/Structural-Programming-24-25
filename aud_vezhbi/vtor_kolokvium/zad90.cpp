#include <iostream>
#include <cstring>
using namespace std;

int isPalindromeI(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int isPalindromeR(char *str, int start, int end) {
    if (start >= end) {
        return 1;
    } else {
        if (str[start] != str[end]) {
            return 0;
        } else {
            return isPalindromeR(str, start + 1, end - 1);
        }
    }
}

int main() {
    char str[100];
    cin.getline(str, 100);

    if (isPalindromeR(str, 0, strlen(str) - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

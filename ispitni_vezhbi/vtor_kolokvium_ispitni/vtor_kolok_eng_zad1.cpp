#include <iostream>
using namespace std;


void shift(char *str, int x, int idx = 0) {
    if (str[idx] == '\0') return;

    if (isalpha(str[idx])) {
        char base;
        if (islower(str[idx])) {
            base = 'a';
        } else {
            base = 'A';
        }
        str[idx] = base + (str[idx] - base + x) % 26;
    }
    shift(str, x, idx + 1);
}

int main() {
    int n, x;
    cin >> n >> x;
    cin.ignore();

    char str[81];

    for (int i = 0; i < n; i++) {
        cin.getline(str, 81);
        shift(str, x);
        cout << str << endl;
    }

    return 0;
}

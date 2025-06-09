#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool isPalindrome(const char *line) {
    int len = strlen(line);
    for (int i = 0; i < len / 2; i++) {
        if (line[i] != line[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

bool hasSpecialChar(const char *line) {
    int len = strlen(line);
    for (int i = 0; i < len; i++) {
        if (!isalnum(line[i])) {
            return true;
        }
    }
    return false;
}


int main() {
    int n;
    cin >> n;

    char curr[81];
    char best[81] = "";
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        cin >> curr;

        if (isPalindrome(curr) && hasSpecialChar(curr)) {
            int len = strlen(curr);
            if (len > maxLen) {
                maxLen = len;
                strcpy(best, curr);
            }
        }
    }
    if (maxLen == 0) {
        cout << "Nema!" << endl;
    } else {
        cout << best << endl;
    }
    return 0;
}

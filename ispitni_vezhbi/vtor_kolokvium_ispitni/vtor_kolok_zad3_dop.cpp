#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int countA1c(const char *str) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i <= len - 3; i++) {
        if ((str[i] == 'A' && str[i + 1] == '1' && str[i + 2] == 'c') ||
            (str[i] == 'a' && str[i + 1] == '1' && str[i + 2] == 'c') ||
            (str[i] == 'A' && str[i + 1] == '1' && str[i + 2] == 'C') ||
            (str[i]=='a'&& str[i + 1] == '1' && str[i + 2] == 'C')) {
            count++;
        }
    }
    return count;
}

void printLower(const char *str) {
    for (int i = 0; i < strlen(str); i++) {
        cout << char(tolower(str[i]));
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    char line[1001];

    for (int i = 0; i < n; i++) {
        cin.getline(line, 1001);
        if (countA1c(line) >= 2) {
            printLower(line);
        }
    }

    return 0;
}

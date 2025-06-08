#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char line[101];

    while (cin.getline(line, 101)) {
        if (strcmp(line, "#") == 0) {
            break;
        }

        char digits[101];
        int digitCount = 0;

        // Extract digits
        for (int i = 0; line[i] != '\0'; i++) {
            if (isdigit(line[i])) {
                digits[digitCount++] = line[i];
            }
        }

        // Sort the digits
        sort(digits, digits + digitCount);

        // Print the result
        cout << digitCount << ":";
        for (int i = 0; i < digitCount; i++) {
            cout << digits[i];
        }
        cout << endl;
    }

    return 0;
}
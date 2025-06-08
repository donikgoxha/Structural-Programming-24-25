//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char line[1001], longest[1001];
    int max = 0;

    while (true) {
        cin.getline(line, 1001);
        if (strcmp(line, "0") == 0) {
            break;
        }

        int digitcount = 0;
        for (int i = 0; i < strlen(line); i++) {
            if (isdigit(line[i])) {
                digitcount++;
            }
        }
        if (digitcount >= 2 && strlen(line) >= max) {
            max = strlen(line);
            strcpy(longest, line);
        }
    }
    int firstDigit = -1, lastDigit = -1;
    for (int i = 0; longest[i] != '\0'; i++) {
        if (isdigit(longest[i])) {
            if (firstDigit == -1)
                firstDigit = i;
            lastDigit = i;
        }
    }

    for (int i = firstDigit; i <= lastDigit; i++) {
        cout << longest[i];
    }
    cout << endl;


    return 0;
}

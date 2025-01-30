//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main() {
    int maxRatioRow = -1;
    double maxRatio = -1;
    int lineNumber = 0;
    char result[100];


    char lines[1001];
    while (cin.getline(lines, 1000)) {
        int counterDigits = 0, counterLetters = 0;
        for (int i = 0; i < strlen(lines); i++) {
            if (isDigit(lines[i])) {
                counterDigits++;
            }
            if (isLetter(lines[i])) {
                counterLetters++;
            }
        }
        if (counterLetters == 0)continue;
        double ratio = (double) counterDigits / (double) counterLetters;

        if (ratio >= maxRatio) {
            maxRatio = ratio;
            maxRatioRow = lineNumber;
            strcpy(result, lines);
        }
        lineNumber++;
    }
    cout << result << endl;
    return 0;
}

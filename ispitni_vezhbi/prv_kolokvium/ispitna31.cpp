//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int sum = 0;
    cin >> sum;

    char maxCode[10] = "";
    int maxType = 0;
    double maxCoefficient = 0.0;
    double totalCoefficient = 1.0;

    while (true) {
        char code[10];
        int type;
        double coefficient;

        cin >> code;

        if (strcmp(code, "#") == 0) {
            break;
        }

        cin >> type >> coefficient;

        if (coefficient > maxCoefficient) {
            maxCoefficient = coefficient;
            strcpy(maxCode, code);
            maxType = type;
        }

        totalCoefficient *= coefficient;
    }
    const double potentialWin = totalCoefficient * sum;
    cout << maxCode << " " << maxType << " " << maxCoefficient << endl;
    cout << potentialWin << endl;


    return 0;
}

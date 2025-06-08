//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int suma;
    cin >> suma;

    char code[10];
    int tip;
    float coef;

    float maxCoef = -1.0;
    char maxCode[10];
    float product = 1.0;
    int maxTip = 0;

    while (true) {
        cin >> code;

        if (strcmp(code, "#") == 0) {
            break;
        }

        cin >> tip;
        cin >> coef;

        if (coef > maxCoef) {
            maxCoef = coef;
            strcpy(maxCode, code);
            maxTip = tip;
        }

        product *= coef;
    }

    cout << maxCode << " " << maxTip << " " << maxCoef << endl;
    cout << suma * product << endl;

    return 0;
}

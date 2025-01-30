//
// Created by Donik Goxha on 05-Nov-24.
//
#include <cmath>
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    char str[256];
    int lineNum = 0;
    int maxLineNum = 0;
    double maxRatio = -1.0;

    while (cin.getline(str, 256)) {
        lineNum++;
        int counterUp = 0;
        int counterDown = 0;
        for (int i = 0; i < strlen(str); i++) {
            if (isupper(str[i])) {
                counterUp++;
            } else if (islower(str[i])) {
                counterDown++;
            }
        }

        double ratio;
        if (counterDown == 0) {
            if (counterUp == 0) {
                ratio = 0.0;
            } else {
                ratio = INFINITY;
            }
        } else {
            ratio = static_cast<double>(counterUp) / static_cast<double>(counterDown);
        }

        cout << fixed << setprecision(2) << ratio << " " << str << endl;

        if (ratio > maxRatio) {
            maxRatio = ratio;
            maxLineNum = lineNum;
        }
    }
    cout << maxLineNum - 1 << endl;

    return 0;
}

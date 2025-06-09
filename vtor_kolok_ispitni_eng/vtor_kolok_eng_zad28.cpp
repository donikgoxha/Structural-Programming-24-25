//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char line[81];
    while (cin.getline(line, 81)) {
        int sum = 0, num = 0;
        bool inNumber = false;

        for (int i = 0; i < strlen(line); i++) {
            if (isdigit(line[i])) {
                num = num * 10 + (line[i] - '0');
                inNumber = true;
            } else {
                if (inNumber) sum += num, num = 0;
                if (line[i] != '*' && line[i] != '?') cout << line[i];
                inNumber = false;
            }
        }
        if (inNumber) sum += num;
        cout << sum << endl;
    }


    return 0;
}

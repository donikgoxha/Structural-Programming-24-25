//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

int main() {
    char str[81];
    while (cin.getline(str, 81)) {
        int i = 0;

        while (str[i] != '\0') {
            if (isalpha(str[i])) {
                cout << str[i];
            } else {
                if (i > 0 && isalpha(str[i - 1])) {
                    cout << endl;
                }
            }
            i++;
        }
        if (i > 0 && isalpha(str[i - 1])) {
            cout << endl;
        }
    }

    return 0;
}

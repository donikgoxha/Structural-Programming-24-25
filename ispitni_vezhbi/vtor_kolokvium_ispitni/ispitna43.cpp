//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

bool isHexadecimal(char *word) {
    int i = 0;
    while (word[i] != '\0') {
        if (!isxdigit(word[i])) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    char str[100];
    int counter = 0;
    while (cin >> str) {
        if (isHexadecimal(str)) {
            for (int i = 0; i < str[i] != '\0'; i++) {
                str[i] = toupper(str[i]);
            }
            cout << str << endl;
            counter++;
        }
    }
    cout << "Total: " << counter << endl;
    return 0;
}

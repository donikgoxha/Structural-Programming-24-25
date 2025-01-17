//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[101];
    int counter = 0;


    while (cin.getline(str, 101)) {
        if (strcmp(str, "#") == 0) {
            break;
        }

        int length = strlen(str);
        for (int i = 0; i < length - 1; i++) {
            //poradi null terminatorot
            if (isVowel(str[i]) && isVowel(str[i + 1])) {
                cout << (char) tolower(str[i]) << (char) tolower(str[i + 1]) << endl;
                ++counter;
            }
        }
    }
    cout << counter << endl;

    return 0;
}

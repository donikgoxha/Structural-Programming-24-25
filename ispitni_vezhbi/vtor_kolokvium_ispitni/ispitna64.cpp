//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <cstring>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        char str[100];
        cin.getline(str, 100);

        for (int j = 0; j < strlen(str); j++) {
            if (!isVowel(str[j])) {
                cout << str[j];
            }
        }
        cout << endl;
    }

    return 0;
}

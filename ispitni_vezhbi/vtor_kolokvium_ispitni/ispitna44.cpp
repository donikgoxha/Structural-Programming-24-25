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
    int k;
    cin >> k;
    cin.ignore();

    char lines[1001];
    while (cin.getline(lines, 1001)) {
        for (int i = 0; i < strlen(lines); i++) {
            cout << lines[i];
            if (isVowel(lines[i])) {
                for (int j = 1; j < k; j++) {
                    cout << lines[i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}

//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char words[21];
    char result[21];
    int maxCount = 0;
    while (cin >> words) {
        int length = strlen(words);
        if (length < 4) continue;
        int counter = 0;
        bool found[26] = {false};
        for (int i = 0; words[i]; i++) {
            char c = tolower(words[i]);
            if (isalpha(c) && !found[c - 'a']) {
                found[c - 'a'] = true;
                counter++;
            }
        }
        if (counter >= maxCount) {
            maxCount = counter;
            strcpy(result, words);
        }
    }
    cout << result << endl;
    return 0;
}

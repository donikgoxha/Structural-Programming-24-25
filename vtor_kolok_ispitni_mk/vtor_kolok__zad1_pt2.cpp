#include <iostream>
#include <string.h>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char line[1001];
    int counter = 0;

    while (true) {
        cin.getline(line, 1000);
        if (strcmp(line, "#") == 0) {
            break;
        }

        int length = strlen(line);

        for (int i = 0; i < length - 1; i++) {
            char first = tolower(line[i]);
            char second = tolower(line[i + 1]);

            if (isVowel(first) && isVowel(second)) {
                cout << first << second << endl;
                counter++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    char line[81];

    while (cin.getline(line, 81)) {
        char word[81];
        int w = 0;

        for (int i = 0; line[i] != '\0'; i++) {
            if (isalpha(line[i])) {
                word[w++] = line[i];
            } else {
                if (w > 0) {
                    word[w] = '\0';
                    cout << word << endl;
                    w = 0;
                }
            }
        }


        if (w > 0) {
            word[w] = '\0';
            cout << word << endl;
        }
    }
    return 0;
}

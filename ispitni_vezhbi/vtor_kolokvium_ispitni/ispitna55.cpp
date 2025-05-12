//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char line[101];
    char best[101];
    int max = 0;


    while (true) {
        cin.getline(line, 101);

        if (strcmp(line, "0") == 0) {
            break;
        }

        int count = 0;
        int len = strlen(line);

        for (int i = 0; i < len; i++) {
            if (isdigit(line[i])) {
                count++;
            }
        }

        if (count >= 2) {
            if (len >= max) {
                max = len;
                strcpy(best, line);
            }
        }
    }

    if (strlen(best) > 0) {
        int first = -1, last = -1;
        int len = strlen(best);

        for (int i = 0; i < len; i++) {
            if (isdigit(best[i])) {
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }
        for (int i = first; i <= last; i++) {
            cout << best[i];
        }
        cout << endl;
    }
    return 0;
}

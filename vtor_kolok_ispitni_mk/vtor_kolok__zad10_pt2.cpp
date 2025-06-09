//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char z1, z2;
    cin >> z1 >> z2;
    cin.ignore();
    char line[1001];

    while (cin.getline(line, 1000)) {
        if (strcmp(line, "#") == 0) {
            break;
        }

        char *start = strchr(line, z1);
        char *end = strchr(line, z2);

        if (start && end && end > start + 1) {
            start++;
            while (start < end) {
                cout << *start;
                start++;
            }
            cout << endl;
        }
    }


    return 0;
}

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int countOccurances(const char *line, char c) {
    int counter = 0;
    while (*line != '\0') {
        if (*line == c) {
            counter++;
        }
        line++;
    }
    return counter;
}

int countOccurances1(const char *line, char c) {
    int counter = 0;
    for (int i = 0; i < strlen(line); i++) {
        if (line[i] == c) {
            counter++;
        }
    }
    return counter;
}

int countOccurances2(const char *line, char c) {
    if (*line == '\0') {
        return 0;
    } else {
        if (*line == c) {
            return 1 + countOccurances2(line + 1, c);
        } else {
            return countOccurances2(line + 1, c);
        }
    }
}


int main() {
    char line[100];
    char c;

    cin.getline(line, 100);
    cin >> c;

    cout << countOccurances(line, c);
    cout << countOccurances1(line, c);
    cout << countOccurances2(line, c);


    return 0;
}

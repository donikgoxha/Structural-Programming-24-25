#include <iostream>
#include <cstring>
using namespace std;

void transformText(char *input) {
    for (int i = 0; i < strlen(input); i++) {
        if (isalpha(input[i])) {
            char base = 'a';
            input[i] = tolower(input[i]);
            input[i] = ((input[i] - base + 3) % 26) + base;
        }
    }
}


int main() {
    char str[1000];
    while (cin.getline(str, 1000)) {
        transformText(str);
        cout << str << endl;
    }


    return 0;
}

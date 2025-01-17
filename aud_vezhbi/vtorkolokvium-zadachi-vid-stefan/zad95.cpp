#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
//zad2 alternative

bool isVowel(char x) {
    switch (tolower(x)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

void transform(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (isVowel(str[i])) {
            for (int j = 0; j < strlen(str); j++) {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
}

int main() {
    char str[81];
    while (cin.getline(str, 81)) {
        transform(str);
        cout << str << endl;
    }


    return 0;
}

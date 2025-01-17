#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
//zad2

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

int main() {
    char str[81];
    while (cin.getline(str, 81)) {
        for (int i = 0; i < strlen(str); i++) {
            if (!isVowel(str[i])) {
                cout << str[i];
            }
        }
        cout << endl;
    }


    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void removeVowels(char str[]) {
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(!isVowel(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    char str[100];
    for(int i = 0; i < n; i++) {
        cin.getline(str, 100);
        removeVowels(str);
        cout << str << endl;
    }

    return 0;
}

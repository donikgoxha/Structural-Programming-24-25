//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <string.h>
using namespace std;


bool isPalindrome(char *word) {
    int i = 0, j = strlen(word) - 1;
    while (i < j && !strchr("aeiouAEIOU", word[i])) i++;
    while (i < j && !strchr("aeiouAEIOU", word[j])) j--;
    if (tolower(word[i]) != tolower(word[j])) return false;
    return true;
}

int main() {
    char str[1001];
    while (cin.getline(str, 1001)) {
        if (isPalindrome(str)) cout << str << endl;
    }

    return 0;
}

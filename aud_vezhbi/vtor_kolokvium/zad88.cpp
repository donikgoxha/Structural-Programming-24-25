#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int start, length;
    cin.getline(str, 100);

    cin >> start >> length;

    // for (int i = start - 1; i < (start + length - 1); i++) {
    //     if (str[i] == '\0') break;
    //     cout << str[i];
    // }
    char newStr[100];
    strncpy(newStr, str + start - 1, length);
    newStr[length] = '\0';
    cout << newStr << endl;


    return 0;
}

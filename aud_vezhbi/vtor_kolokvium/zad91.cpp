#include <iostream>
#include <cstring>
using namespace std;

int isValidPassword(char *password) {
    int n = strlen(password);
    if (n < 8) {
        return 0;
    }
    int hasUpperLetter = 0;
    int hasDigit = 0;
    int hasSpecialChar = 0;

    for (int i = 0; i < n; i++) {
        if (isupper(password[i])) hasUpperLetter = 1;

        if (isdigit(password[i])) hasDigit = 1;

        if (!isalnum(password[i])) hasSpecialChar = 1;
    }
    return hasUpperLetter && hasDigit && hasSpecialChar;
}

int main() {
    char password[100];
    cin.getline(password, 100);

    if (isValidPassword(password)) cout << "Strong";
    else cout << "Weak";


    return 0;
}

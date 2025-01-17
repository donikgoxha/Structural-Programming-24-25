#include <iostream>
#include <string.h>
using namespace std;

void clean1(char *str) {
    int i, j = 0;
    int n = strlen(str);
    char tmp[100];
    for (i = 0; i < n; i++) {
        if (!isalpha(str[i])) {
            str[i] = '@';
        }
    }

    for (i = 0; i < n; i++) {
        if (str[i] != '@') {
            if (isupper(str[i])) {
                str[j] = tolower(str[i]);
            } else {
                str[j] = toupper(str[i]);
            }
            ++j;
        }
    }

    str[j] = '\0';
}

//0v@ePr1m3R
void clean(char *str) {
    int n = strlen(str);
    int i, j;
    for (i = 0; i < n; i++) {
        if (!isalpha(str[i])) {
            for (j = i; j < n; j++) {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
            n--;
            i--;
        } else {
            if (isupper(str[i])) {
                str[i] = tolower(str[i]);
            } else {
                str[i] = toupper(str[i]);
            }
        }
    }
}

int main() {
    char str[100];
    cin.getline(str, 100);
    clean1(str);
    cout << str << endl;

    return 0;
}

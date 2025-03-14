#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
//zad4


int main() {
    char contacts[100][100];
    int size = 0;

    while (cin.getline(contacts[1], 100)) {
        if (contacts[size][0] == '#') {
            break;
        }
        ++size;
    }

    char contact[100];
    cin.getline(contact, 100);
    char type;
    cin >> type;

    for (int i = 0; i < size; ++i) {
        if (strstr(contacts[i], contact)) {
            if (type == 'd') {
                bool flag = false;
                for (int j = 0; j < strlen(contacts[i]); j++) {
                    if (isdigit(contacts[i][j])) flag = true;
                    if (isspace(contacts[i][j]) && flag) {
                        flag = false;
                        break;
                    }
                    if (flag) cout << contacts[i][j];
                }
            } else {
                for (int j = strlen(contacts[i]) - 1; j >= 0; j--) {
                    if (isspace(contacts[i][j])) {
                        cout << contacts[i] + j + 1;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}

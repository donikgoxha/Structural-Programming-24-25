#include <iostream>
using namespace std;

int strLengthI(const char *str) {
    int counter = 0;
    while (*str != '\0') {
        str++;
        counter++;
    }
    return counter;
}

int strLengthR(const char *str) {
    if (*str == '\0') return 0;
    else return 1 + strLengthR(str + 1);
}

int main() {
    char str[100];
    cin.getline(str, 100);

    cout << strLengthI(str) << endl;
    cout << strLengthR(str) << endl;


    return 0;
}

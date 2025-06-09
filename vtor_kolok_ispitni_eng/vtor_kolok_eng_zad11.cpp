//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[101];
    cin >> str;

    int first = -1;
    int second = -1;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            if (first == -1) {
                first = i;
            } else if (second == -1) {
                second = i;
                break;
            }
        }
    }
    if (first == -1) {
        cout << "No digits" << endl;
    } else if (second == -1) {
        cout << &str[first] << endl;
    } else {
        for (int i = first; i <= second; i++) {
            cout << str[i];
        }
        //cout << endl;
    }


    return 0;
}

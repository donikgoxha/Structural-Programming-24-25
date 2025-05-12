//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    int x;
    cin >> n >> x;
    cin.ignore();

    char niza[81];

    for (int i = 0; i < n; i++) {
        cin.getline(niza, 100);

        for (int j = 0; niza[j] != '\0'; j++) {
            if (niza[j] >= 'a' && niza[j] <= 'z') {
                char shifted = 'a' + (niza[j] - 'a' + x) % 26;
                cout << shifted;
            } else if (niza[j] >= 'A' && niza[j] <= 'Z') {
                char shifted = 'A' + (niza[j] - 'A' + x) % 26;
                cout << shifted;
            }
        }
        cout << endl;
    }
    return 0;
}

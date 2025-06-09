#include <iostream>
using namespace std;

void picture(int number) {
    cout << "%";
    for (int j = 0; j < number - 2; j++) {
        cout << "@";
    }
    cout << "%" << endl;
    for (int i = 0; i < number - 2; i++) {
        cout << "%";
        for (int j = 0; j < number - 2; j++) {
            cout << ".";
        }
        cout << "%" << endl;
    }
    cout << "%";
    for (int j = 0; j < number - 2; j++) {
        cout << "@";
    }
    cout << "%" << endl;
}

int main() {
    int number;
    cin >> number;
    if (number > 2) {
        picture(number);
    }
    return 0;
}

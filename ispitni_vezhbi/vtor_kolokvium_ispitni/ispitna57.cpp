#include <iostream>
using namespace std;

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);

    cout << "Transformed string: ";
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == 's')
            cout << '$';
        else if (input[i] == 'm')
            cout << "^^";
        else
            cout << input[i];
    }
    cout << endl;

    return 0;
}

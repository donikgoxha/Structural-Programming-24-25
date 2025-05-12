#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[81];

    while (cin.getline(a, 81)) {
        int length = strlen(a);
        bool inWord = false;
        for (int i = 0; i < length; i++) {
            if (isalpha(a[i])) {
                cout << a[i];
                inWord = true;
            } else {
                if (inWord) {
                    cout << endl;
                    inWord = false;
                }
            }
        }
        if (inWord) {
            cout << endl;
        }
    }

    return 0;
}

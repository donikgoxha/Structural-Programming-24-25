#include <iostream>
#include <cstring>
using namespace std;

int checkSomething(char ch[]) {
    int mainCounter = 0;
    int len = strlen(ch);
    int counter = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(ch[i])) {
            counter++;
        } else {
            if (counter <= 3 && counter > 0) {
                mainCounter++;
            }
            counter = 0;
        }
    }
    return mainCounter;
}

int main() {
    char ch[100], ch1[100];
    int min = 0;
    while (cin.getline(ch, 100)) {
        if (ch[0] == '#') {
            break;
        }
        int mainCounter = checkSomething(ch);
        if (mainCounter > min) {
            min = mainCounter;
            strcpy(ch1, ch);
        }
    }
    cout << min << ": " << ch1 << endl;
    return 0;
}

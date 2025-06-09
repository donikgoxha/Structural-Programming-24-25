#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word[31];
    while (cin.getline(word, 31)) {
        int len = strlen(word);
        int check = 0;
        int size = (len + 1) / 2;
        for (int i = 0, j = len - 1; i < size; i++, j--) {
            char temp = tolower(word[i]), temp2 = tolower(word[j]);
            if ((temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') ||
                (temp2 == 'a' || temp2 == 'e' || temp2 == 'i' || temp2 == 'o' || temp2 == 'u')) {
                if (temp != temp2) {
                    check = 1;
                    break;
                }
            }
        }
        if (check == 0) {
            cout << word << endl;
        }
    }
    return 0;
}

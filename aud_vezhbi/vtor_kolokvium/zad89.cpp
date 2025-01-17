#include <iostream>
#include <cstring>
using namespace std;

int contains(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len2 > len1) return 0;
    for (int i = 0; i < len1 - len2; i++) {
        if (str1[i] == str2[0]) {
            bool cnt = true;
            for (int j = 1; j < len2; j++) {
                if (str2[j] != str1[i + j]) {
                    cnt = false;
                    break;
                }
            }
            if (cnt == true) return 1;
        }
    }
    return 0;
}

int contains1(const char *str1, const char *str2) {
    if (strlen(str2) > strlen(str1)) return 0;
    char *res = strstr(str1, str2);

    return res != nullptr;
}


int main() {
    char str1[100];
    char str2[100];
    cin.getline(str1, 100);
    cin.getline(str2, 100);

    if (contains(str1, str2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

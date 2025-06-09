#include <iostream>
#include <cstring>
using namespace std;

void transform(char *str, int x, int i = 0) {
    if (str[i] == '\0') return;

    if (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] = 'A' + (str[i] - 'A' + x) % 26;
    } else if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = 'a' + (str[i] - 'a' + x) % 26;
    }

    transform(str, x, i + 1);
}

int main() {
    int N, X;
    cin >> N >> X;
    cin.ignore();

    char line[1000];

    for (int i = 0; i < N; i++) {
        cin.getline(line, 1000);
        transform(line, X);
        cout << line << endl;
    }

    return 0;
}

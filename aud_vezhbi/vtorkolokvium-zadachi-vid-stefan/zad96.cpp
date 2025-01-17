#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
//zad3

int similarity(int x, int y) {
    if (x == 0 || y == 0) return 0;
    else {
        if (x % 10 == y % 10) {
            return 1 + similarity(x / 10, y / 10);
        } else {
            return similarity(x / 10, y / 10);
        }
    }
}

int main() {
    int x;
    int y;
    cin >> x;

    int maxSimilarity = 0;
    int maxNumber = 0;
    while (cin >> y) {
        //cout << x << " " << y << " " << similarity(x, y) << endl;
        if (similarity(x, y) > maxSimilarity) {
            maxSimilarity = similarity(x, y);
            maxNumber = y;
        }
    }
    cout << maxNumber << endl;
    return 0;
}

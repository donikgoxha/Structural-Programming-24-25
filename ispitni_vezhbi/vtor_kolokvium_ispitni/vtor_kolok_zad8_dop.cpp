#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 50;

int n;
char mat[MAX][MAX];
char word[11];

bool match(int x, int y, int dx, int dy, int len, int &endX, int &endY) {
    for (int i = 0; i < len; i++) {
        int nx = x + i * dx;
        int ny = y + i * dy;

        if (nx < 0 || nx >= n || ny < 0 || ny >= n) return false;
        if (mat[nx][ny] != word[i]) return false;
    }

    endX = x + (len - 1) * dx;
    endY = y + (len - 1) * dy;
    return true;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    cin >> word;
    int len = strlen(word);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int ex, ey;

            if (match(i, j, 0, 1, len, ex, ey)) {
                cout << i << ", " << j << " -> " << ex << ", " << ey << endl;
                return 0;
            }

            if (match(i, j, 0, -1, len, ex, ey)) {
                cout << i << ", " << j << " -> " << ex << ", " << ey << endl;
                return 0;
            }

            if (match(i, j, 1, 0, len, ex, ey)) {
                cout << i << ", " << j << " -> " << ex << ", " << ey << endl;
                return 0;
            }

            if (match(i, j, -1, 0, len, ex, ey)) {
                cout << i << ", " << j << " -> " << ex << ", " << ey << endl;
                return 0;
            }
        }
    }

    // Доколку не се најде
    cout << "Not Found" << endl;
    return 0;
}

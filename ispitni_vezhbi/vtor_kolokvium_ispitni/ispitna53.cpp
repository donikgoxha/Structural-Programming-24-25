#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[100][100];
    int counter = 0;


    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];


    for (int i = 0; i < m; i++) {
        int str = 0;
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                str++;
                if (str == 3) {
                    found = true;
                    break;
                }
            } else {
                str = 0;
            }
        }
        if (found == true) counter++;
    }

    for (int i = 0; i < n; i++) {
        int str = 0;
        bool found = false;
        for (int j = 0; j < m; j++) {
            if (a[j][i] == 1) {
                str++;
                if (str == 3) {
                    found = true;
                    break;
                }
            } else {
                str = 0;
            }
        }
        if (found == true) counter++;
    }

    cout << counter << endl;
    return 0;
}

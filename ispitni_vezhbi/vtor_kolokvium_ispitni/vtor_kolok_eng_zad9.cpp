#include <iostream>
using namespace std;

int parcom(int a) {
    if (a == 0) {
        return a;
    }
    if (a % 2 == 0) {
        int temp = (a % 10) + 1;
        return 10 * parcom(a / 10) + temp;
    }
    if (a % 2 != 0) {
        int temp = (a % 10) - 1;
        return 10 * parcom(a / 10) + temp;
    }
}

int main() {
    int a;
    int arr[100];
    int i = 0;
    while (cin >> a) {
        arr[i] = parcom(a);
        i++;
    }
    if (i < 5) {
        for (int j = 0; j < i; j++) {
            cout << arr[j] << endl;
        }
    } else {
        for (int j = 0; j < i; j++) {
            int index, min = arr[j];
            for (int k = j; k < i; k++) {
                if (arr[k] < min) {
                    min = arr[k];
                    index = k;
                }
            }
            int temp = arr[j];
            arr[j] = arr[index];
            arr[index] = temp;
        }
        for (int j = 0; j < 5; j++) {
            cout << arr[j] << " ";
        }
    }
    return 0;
}

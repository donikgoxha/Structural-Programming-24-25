#include <iostream>
using namespace std;

int factrial(int a) {
    if (a == 0) {
        return 1;
    }
    return (a % 10) * factrial(a - 1);
}

bool isStrong(int a) {
    int sum = 0, temp = a;
    while (temp > 0) {
        sum += factrial(temp % 10);
        temp = temp / 10;
    }
    if (sum == a) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Strong numbers: " << endl;
    for (int i = 0; i < n; i++) {
        if (isStrong(arr[i])) {
            cout << arr[i] << endl;
        }
    }
    return 0;
}

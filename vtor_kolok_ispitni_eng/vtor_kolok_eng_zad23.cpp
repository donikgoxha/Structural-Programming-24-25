#include <iostream>
using namespace std;

int abriviated(int a, int k) {
    if (a == 0) {
        return 0;
    }
    if (a % 10 > k) {
        return 10 * abriviated(a / 10, k) + (a % 10);
    }
    return abriviated(a / 10, k);
}

int findMax(int a[], int n) {
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        arr[i] = abriviated(arr[i], k);
    }
    cout << findMax(arr, n) << endl;
    return 0;
}

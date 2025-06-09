#include <iostream>
using namespace std;

int sum_pos(int *arr, int ind, int n) {
    if (ind >= n) return 0;

    int sum = 0;
    int *ptr = arr + ind;

    while (ptr < arr + n) {
        sum += *ptr;
        ptr++;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    int ind;
    cin >> ind;

    cout << sum_pos(arr, ind, n) << endl;

    return 0;
}

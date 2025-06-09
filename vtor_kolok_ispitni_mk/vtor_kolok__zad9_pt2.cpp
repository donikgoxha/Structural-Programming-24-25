#include <iostream>
using namespace std;

double cont_frac(int *arr, int i, int n) {
    if (i == n - 1) {
        return arr[i];
    }
    return arr[i] + 1.0 / cont_frac(arr, i + 1, n);
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double result = cont_frac(arr, 0, n);
    cout << result << endl;

    return 0;
}

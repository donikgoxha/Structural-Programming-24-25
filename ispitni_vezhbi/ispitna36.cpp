#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double num, sum = 0, largest = -111111111, secondLargest = -1111111;

    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;

        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num < largest) {
            secondLargest = num;
        }
    }

    cout << sum / n << endl;
    cout << secondLargest << endl;

    return 0;
}

#include <iostream>
using namespace std;

int linearSearch(int a[], int size, int search) {
    for (int i = 0; i < size; i++) {
        if (search == a[i]) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int a[], int size, int search) {
    int start = 0, end = size - 1;
    while (start < end) {
        int mid = (start + end) / 2;
        if (a[mid] == search) {
            return mid;
        } else if (search > a[mid]) {
            start = mid;
        } else {
            end = mid;
        }
    }
    return -1;
}


int main() {
    int a[100];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    int element;
    cin >> element;

    cout << binarySearch(a, size, element) << endl;

    return 0;
}

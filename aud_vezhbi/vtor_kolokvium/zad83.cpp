#include <iostream>
using namespace std;

long factorialRecursive(int n) {
    if (n == 1) return 1;
    else return n * factorialRecursive(n - 1);
}


int main() {
    int n;
    cin >> n;
    cout << factorialRecursive(n);

    return 0;
}

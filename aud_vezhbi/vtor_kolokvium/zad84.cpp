#include <iostream>
using namespace std;


long factorial(int n) {
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}

int sumOfFirstN(int n) {
    if (n == 1) return 1;
    else return n + sumOfFirstN(n - 1);
}

long sum(int n) {
    if (n == 1) return 1;
    else return factorial(sumOfFirstN(n)) + sum(n - 1);
}


int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}

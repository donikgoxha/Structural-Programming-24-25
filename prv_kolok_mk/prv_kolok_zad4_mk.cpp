#include <iostream>
using namespace std;

int main() {
    char ch;
    int sum = 0, sum1 = 0;
    while (cin.get(ch) && ch != '!') {
        if (isdigit(ch)) {
            sum1 = sum1 * 10 + ch - '0';
        } else {
            sum = sum + sum1;
            sum1 = 0;
        }
    }
    sum = sum + sum1;
    cout << sum;
    return 0;
}

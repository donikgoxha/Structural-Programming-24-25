#include <iostream>
using namespace std;

int sumOfTwoNumbers(int a, int b) {
    return a + b;
}

int main() {
    int z, a, b;
    float counter = 0, counter2 = 0;
    cin >> z;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) {
            break;
        }
        counter2++;
        int sum = sumOfTwoNumbers(a, b);
        if (sum == z) {
            counter++;
        }
    }
    cout << "Vnesovte " << counter << " parovi od broevi chij zbir e " << z << endl;
    cout << "Procentot na parovi so zbir " << z << " e " << counter / counter2 * 100 << "%" << endl;
    return 0;
}

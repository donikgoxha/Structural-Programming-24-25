#include <iostream>
using namespace std;

int main() {
    int array[100];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int k;
    cin >> k;

    for (int shift = 0; shift < k; shift++) {
        //1. poslednata vrednost odi vo temp
        int temp = array[size - 1];

        //2. shiftanje na sekoja vrednost za edno vo desno
        for (int i = size - 1; i >= 1; i--) {
            array[i] = array[i - 1];
        }

        //3. go vrakjame izbrkaniot element na 0ta pozicija
        array[0] = temp;
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    return 0;
}

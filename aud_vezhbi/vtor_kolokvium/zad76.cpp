#include <iostream>
using namespace std;

int main() {
    int array[100], size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    //1. gi vrtam site elementi od nizata
    for (int i = 0; i < size; i++) {
        int fixedElement = array[i];
        //2. so vgnezden ciklus gi vrtam site elementi posle i
        for (int j = i + 1; j < size; j++) {
            if (fixedElement == array[j]) {
                //3. tuka sme nashle duplikat na array[i]
                for (int k = j; k < size; k++) {
                    array[k] = array[k + 1];
                }
                --size;
                --j;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }


    return 0;
}

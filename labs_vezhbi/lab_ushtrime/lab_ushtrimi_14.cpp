//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0.0;
    cin >> n;
    float array[100];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
        sum += array[i];
    }


    float srednaVrednost = sum / n;
    float najblisku = array[0];

    for (int i = 0; i < n; i++) {
        if (abs(array[i] - srednaVrednost) < abs(najblisku - srednaVrednost)) {
            najblisku = array[i];
        }
    }
    cout << fixed << setprecision(2) << najblisku << endl;

    return 0;
}

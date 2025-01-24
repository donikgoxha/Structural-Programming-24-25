//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int n, m;
    int array1[100];
    int array2[100];
    int zaednicka[200];

    cin >> m;
    for (int i = 0; i < m; i++)cin >> array1[i];


    cin >> n;
    for (int i = 0; i < n; i++)cin >> array2[i];


    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (array1[i] < array2[j]) zaednicka[k++] = array1[i++];
        else zaednicka[k++] = array2[j++];
    }

    while (i < m)zaednicka[k++] = array1[i++];

    while (j < n)zaednicka[k++] = array2[j++];

    for (int x = 0; x < k; x++) cout << zaednicka[x] << " ";
    cout << endl;

    return 0;
}

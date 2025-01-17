//
// Created by Donik Goxha on 05-Nov-24.
//
/*
Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри)
се додека не се внесе нешто различно од број. За секој број треба да се најде позицијата
(од десно на лево) на првото појавување на најголемата цифра во составот на бројот
(цифрата на единици се наоѓа на позиција 0). Потоа, да се испечати статистика за позициите на
најдените цифри со максимална вредност во следниот формат:
[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]
0: 2
1: 3
2: 1
3: 1
4: 1
за броевите 97654 48654 12345 12343 1263 12443 12643 12777
 */
#include <iostream>
using namespace std;


int main() {
    int a;
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    while (cin >> a) {
        int maxDigit = -1;
        int pos = 0;
        int maxPos = -1;

        while (a > 0) {
            int ld = a % 10;
            if (ld > maxDigit) {
                maxDigit = ld;
                maxPos = pos;
            }
            a /= 10;
            pos++;
        }
        if (maxPos == 0) c0++;
        else if (maxPos == 1) c1++;
        else if (maxPos == 2) c2++;
        else if (maxPos == 3) c3++;
        else if (maxPos == 4) c4++;
    }
    if (c0 >= 0) {
        cout << "0: " << c0 << endl;
    }
    if (c1 >= 0) {
        cout << "1: " << c1 << endl;
    }
    if (c2 >= 0) {
        cout << "2: " << c2 << endl;
    }
    if (c3 >= 0) {
        cout << "3: " << c3 << endl;
    }
    if (c4 >= 0) {
        cout << "4: " << c4 << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main () {
    char c;
    int zbir=0;
    while (cin>>c && c!='.') {
        int decimalValue;
        if (c >= '0' && c <= '9') {
            decimalValue = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            decimalValue = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            decimalValue = c - 'a' + 10;
        }
        else {
            cout << "Invalid hexadecimal character!" << endl;
            return 1;
        }
        zbir += decimalValue;
    }
    if (zbir%16==0) {
        if (zbir%100==16) {
            cout<<"Poln pogodok"<<endl;
        }
        else {
            cout<<"Pogodok"<<endl;
        }
    }
    else {
        cout<<zbir<<endl;
    }
    return 0;
}
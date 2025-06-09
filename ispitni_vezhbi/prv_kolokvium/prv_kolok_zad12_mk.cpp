#include <iostream>
using namespace std;

int maxDigitOfNumber (int n) {
    int max=0, position=0, counter=0;
    while (n>0) {
        if (n%10>max) {
            position=counter;
            max=n%10;
        }
        counter++;
        n/=10;
    }
    return position;
}

int main () {
    int n, c0=0 , c1=0 , c2=0 , c3=0 , c4=0 ;
    while (cin>>n) {
        if (maxDigitOfNumber(n)==0) {
            c0++;
        }
        else if (maxDigitOfNumber(n)==1) {
            c1++;
        }
        else if (maxDigitOfNumber(n)==2) {
            c2++;
        }
        else if (maxDigitOfNumber(n)==3) {
            c3++;
        }
        else if (maxDigitOfNumber(n)==4) {
            c4++;
        }
    }
    cout<<"0: "<<c0<<endl;
    cout<<"1: "<<c1<<endl;
    cout<<"2: "<<c2<<endl;
    cout<<"3: "<<c3<<endl;
    cout<<"4: "<<c4<<endl;
    return 0;
}
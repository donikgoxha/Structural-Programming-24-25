#include <iostream>
using namespace std;
bool cikCak (int a) {
    int ran=1;
    while (a>0) {
        ran++;
        if (a%10>=5 && ran%2==0) {

        }
        else if (a%10<5 && ran%2==1) {

        }
        else {
            return false;
        }
        a/=10;
    }
    return true;
}

bool cakCik (int a) {
    int ran=1;
    while (a>0) {
        ran++;
        if (a%10<5 && ran%2==0) {

        }
        else if (a%10>=5 && ran%2==1) {

        }
        else {
            return false;
        }
        a/=10;
    }
    return true;
}

int main () {
    int a;
    while (cin>>a) {
        if (a>10) {
            if (cikCak(a) || cakCik(a)) {
                cout<<a<<endl;
            }
        }
    }
    return 0;
}
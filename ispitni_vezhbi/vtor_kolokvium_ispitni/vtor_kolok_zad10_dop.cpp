#include <iostream>
#include <cmath>
using namespace std;

int sumOfDigits (int n, int m) {
    int counter=0, temp1=m;
    if (m==0) {
        counter=1;
    }
    else {
        while (m>0) {
            counter++;
            m=m/10;
        }
    }
    int temp=pow(10,counter);

    return n*temp+temp1;
}

int main () {
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for(int j=0;j<m;j++) {
        int counter=0;
        for(int i=0;i<n;i++) {
            if (sumOfDigits(i,j)==a[i][j]) {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
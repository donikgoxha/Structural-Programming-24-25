#include <iostream>
using namespace std;

void shiftLeft (int a[], int n) {
    int temp = a[0];
    temp=temp*(-1);
    if (temp>n) {
        for (int i=0; i<n; i++) {
            a[i]=0;
        }
    }
    else {
        for (int i=0; i<n-temp; i++) {
            a[i]=a[i+temp];
        }
        for (int i=n-temp; i<n; i++) {
            a[i]=0;
        }
    }
}

void shiftRight (int a[], int n) {
    int temp=a[0];
    if (temp>n) {
        for (int i=0; i<n; i++) {
            a[i]=0;
        }
    }
    else {
        for (int i=n-1; i>=temp; i--) {
            a[i]=a[i-temp];
        }
        for (int i=temp-1; i>=0; i--) {
            a[i]=0;
        }
    }

}

int main () {
    int n,n1,arr[100];
    int counter=0;
    cin>>n;
    for(int i=0;i<n;i++) {
        int check=0;
        cin>>n1;
        for(int j=0;j<n1;j++) {
            cin>>arr[j];
        }
        if (arr[0]>0) {
            shiftRight(arr, n1);
        }
        if (arr[0]<0) {
            shiftLeft(arr, n1);
        }
        for (int h=0; h<n1; h++) {
            cout<<arr[h]<<" ";
            if (arr[h]!=0) {
                check=1;
            }
        }
        cout<<endl;
        if (check==0) {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
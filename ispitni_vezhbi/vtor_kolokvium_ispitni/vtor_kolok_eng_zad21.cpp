#include <iostream>
using namespace std;

void function (int arr[], int n, int i, int j, int counter=0) {
    if (i==n) {
        cout<<counter<<endl;
        return;
    }
    if (arr[i]>arr[j]) {
        arr[j]=arr[i];
        return function (arr, n, i+1, j-1, counter+1);
    }
    if (arr[i]<arr[j]) {
        arr[i]=arr[j];
        return function (arr, n, i+1, j-1, counter+1);
    }
    if (arr[i]==arr[j]) {
        return function (arr, n, i+1, j-1, counter);
    }
}

int main () {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int size=0;
    if (n%2==0) {
        size=n/2;
    }
    if (n%2!=0) {
        size=(n/2)+1;
    }
    function (arr, size, 0, n-1);
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n, arr[1000];
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int max = 0, max1 = 0;
    int num = 0, num1 = 0;
    for (int i=0; i<10; i++) {
        int counter=0;
        for (int j=0; j<n; j++) {
            if (arr[j]==i) {
                counter++;
            }
        }
        if (counter>=max) {
            max = counter;
            num = i;
            if (max1<max) {
                max1=max;
                num1=num;
            }
        }
    }
    for (int i=0; i<num1; i++) {
        for (int j=0; j<num; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
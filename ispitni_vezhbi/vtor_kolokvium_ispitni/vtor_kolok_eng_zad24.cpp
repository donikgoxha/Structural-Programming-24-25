#include <iostream>
using namespace std;

bool lsdMsd (int a, int lsd, int msd) {
    if (a==0) {
        if (lsd%2==0 && msd%2!=0) {
            return true;
        }
        return false;
    }
    return lsdMsd(a/10, lsd, msd=a%10);
}

int main () {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int counter=0;
    for (int i=0; i<n; i++) {
        if (lsdMsd(arr[i],arr[i]%10,0)) {
            cout<<arr[i]<<endl;
            counter++;
        }
    }
    if (counter==0) {
        cout<<"No such elements!"<<endl;
    }
    return 0;
}
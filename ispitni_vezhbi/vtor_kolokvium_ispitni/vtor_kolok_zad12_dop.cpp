#include <iostream>
using namespace std;
int main () {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        int counter=0;
        for(int j=0;j<n;j++) {
            int sum=i+j;
            if ((sum%2==0 && arr[i][j]%2==0) || (sum%2!=0 && arr[i][j]%2!=0)) {
                counter++;
            }
        }
        cout<<i<<": "<<counter<<endl;
    }
    return 0;
}
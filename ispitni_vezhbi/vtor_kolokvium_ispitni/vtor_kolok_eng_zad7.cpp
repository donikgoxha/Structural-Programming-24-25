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
    bool even;
    int row;
    if (m%2==0) {
        row =m/2;
        even=true;
    }
    else {
        row =m/2+1;
        even=false;
    }
    int sum1=0, sum2=0;
    for (int j=0; j<n; j++) {
        for (int i=0, u=m-1; i<row; i++, u--) {
            sum1+=arr[i][j];
            sum2+=arr[u][j];
        }
        if (even) {
            arr[row-1][j]=abs(sum1-sum2);
            arr[row][j]=abs(sum1-sum2);
        }
        else {
            arr[row-1][j]=abs(sum1-sum2);
        }
        sum1=0;
        sum2=0;
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
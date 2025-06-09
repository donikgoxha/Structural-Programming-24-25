#include <iostream>
#include <climits>
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
    int min=INT_MAX, sum=0;
    int index=0;
    for (int i=0;i<n;i++) {
        sum=0;
        for (int j=0;j<m;j++) {
            sum+=arr[j][i];
        }
        if (sum<min) {
            min=sum;
            index=i;
        }
    }
    cout<<index<<endl;
    return 0;
}
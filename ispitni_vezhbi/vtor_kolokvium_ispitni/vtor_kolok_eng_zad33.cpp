#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    float mat[n][n];
    float arr[n*n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    int temp=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==0 && j<(n-1)) {
                arr[temp]=mat[i][j];
                temp++;
            }
            if ((i+j+1)==n) {
                arr[temp]=mat[i][j];
                temp++;
            }
            if (i==n-1 && j<n && j!=0) {
                arr[temp]=mat[i][j];
                temp++;
            }
        }
    }
    for (int i=0; i<temp; i++) {
        cout<<arr[i]<<" ";
    }
    temp=temp-1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==0 && j<(n-1)) {
                mat[i][j]=arr[temp];
                temp--;
            }
            if ((i+j+1)==n) {
                mat[i][j]=arr[temp];
                temp--;
            }
            if (i==n-1 && j<n && j!=0) {
                mat[i][j]=arr[temp];
                temp--;
            }
        }
    }
    cout<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
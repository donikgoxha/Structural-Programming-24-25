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
    int x,y;
    cin>>x>>y;
    if (arr[x][y]==1) {
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else {
        int up=x,down=x,left=y,right=y;
        while (up>=0 && arr[up][y]==0 ) {
            arr[up][y]=1;
            up--;
        }
        arr[x][y]=0;
        while (down<m && arr[down][y]==0) {
            arr[down][y]=1;
            down++;
        }
        arr[x][y]=0;
        while (left>=0 && arr[x][left]==0) {
            arr[x][left]=1;
            left--;
        }
        arr[x][y]=0;
        while (right<n && arr[x][right]==0) {
            arr[x][right]=1;
            right++;
        }
        arr[x][y]=1;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
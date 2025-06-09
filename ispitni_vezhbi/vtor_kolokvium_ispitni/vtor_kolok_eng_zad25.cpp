#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int mat[n][n];
    int matB[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>mat[i][j];
            matB[i][j] = mat[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (mat[i][j]==0) {
                int counter=0;
                if (i+1<n && mat[i+1][j]==1) {
                    counter++;
                }
                if (i-1>=0 && mat[i-1][j]==1) {
                    counter++;
                }
                if (j+1<n && mat[i][j+1]==1) {
                    counter++;
                }
                if (j-1>=0 && mat[i][j-1]==1) {
                    counter++;
                }
                if (counter>=3) {
                    matB[i][j]=1;
                }
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<matB[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
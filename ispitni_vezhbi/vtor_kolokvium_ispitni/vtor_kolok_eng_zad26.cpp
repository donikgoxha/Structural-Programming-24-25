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
    int arr1[n*n];
    int check=0;
    int temp=0;
    int counter=0;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            counter=0;
            for (int k=0; k<n; k++) {
                if (arr[i][k]==arr[i][j]) {
                    counter++;
                }
            }
            if (counter==1) {
                arr1[temp]=arr[i][j];
                temp++;
                check=1;
            }
        }
    }
    if (check==0) {
        cout<<"N"<<endl;
    }
    else {
        for (int i=0; i<temp; i++) {
            cout<<arr1[i]<<" ";
        }
    }
    return 0;
}
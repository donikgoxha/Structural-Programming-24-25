#include <iostream>
using namespace std;

int sumOfDevisors (int number) {
    int sum=0;
    for (int i=1; i<=number/2; i++) {
        if (number%i==0) {
            sum=sum+i;
        }
    }
    return sum;
}

int maxSumOfDevisors (int number) {
    int max=0,num=0;
    for (int i=1; i<number; i++) {
        int mmm=sumOfDevisors(i);
        if (mmm>max) {
            max=mmm;
            num=i;
        }
    }
    return num;
}

int main () {
    int number;
    cin>>number;
    cout<<maxSumOfDevisors(number)<<endl;
    return 0;
}
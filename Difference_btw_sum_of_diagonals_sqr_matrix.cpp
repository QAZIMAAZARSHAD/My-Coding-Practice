#include <bits/stdc++.h>

using namespace std;

int diagonaldifference(int a[][200], int n){
    int i, j, sum1 = 0, sum2 = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum1 += a[i][j];
            }
            if(i == n-j-1){
                sum2 += a[i][j];
            }
        }
    }
    return abs(sum1-sum2);
}

int main(){
    int i, j, n;
    cin>>n;
    int a[n][200];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<diagonaldifference(a,n);
    return 0;
}

/*

Sample Input
3
11 2 4
4 5 6
10 8 -12

Sample Output
15

*/

//              1
//            1   1
//          1   2   1
//        1   3   3   1


#include<iostream>
using namespace std;

void Pascal(int n){
    int i, j, space;
    for(i=1;i<=n;i++){
        for(space=1;space<n-1-i;space++){
            cout<<" ";
        }
        int c=1;
        for(j=1;j<=i;j++){
            cout<<" "<<c;
            c = c * (i-j)/j;
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    Pascal(n);
    return 0;
}

// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *


#include<iostream>
using namespace std;
int main(){
    int n, i, j, c=1, space;
    cin>>n;
    for(i=0;i<n;i++){
        for(space=0;space<i;space++){
            cout<<" ";
        }
        for(j=0;j<((n*2)-c);j++){
            cout<<"*"<<" ";
        }
        c+=2;
        cout<<endl;
    }
    return 0;
}

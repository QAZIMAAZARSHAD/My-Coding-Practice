#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        int i,j;
        vector<int> v;
        for(i=M;i<=N;i++){
            int flag=0;
            for(j=2;j*j<=i;j++){
                if(i%j == 0){
               flag = 1;
               break;
                }
            }
            if(flag==0 && i!=1){
                v.push_back(i);
            }
        }
      return v;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
  
}  


/*
Input:
M=1,N=10
Output:
2 3 5 7
Explanation:
The prime numbers between 1 and 10
are 2,3,5 and 7.
*/

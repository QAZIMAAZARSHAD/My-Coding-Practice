// Input:
// N = 6
// arr[] = {3,0,0,2,0,4}
// Output:
// 10

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long trappingWater(int a[], int n){
      int i, l[n], r[n];
      long long res = 0;
      l[0] = a[0];
      r[n-1] = a[n-1];
      for(i=1;i<n;i++){
          l[i] = max(l[i-1],a[i]);
      }
      for(i=n-2;i>=0;i--){
          r[i] = max(a[i],r[i+1]);
      }
      for(i=1;i<n-1;i++){
          res += min(l[i],r[i]) - a[i];
      }
      return res;
    }
};

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        cout << obj.trappingWater(a, n) << endl;
        
    }
    return 0;
}

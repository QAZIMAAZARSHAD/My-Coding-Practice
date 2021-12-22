// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long maxSubarraySum(int a[], int n){
    int i, maxsum = a[0];
    int currsum = a[0];
    for (i=1;i<n;i++){
    currsum = max(a[i], currsum+a[i]);
    if(currsum>maxsum){
        maxsum = currsum;
    }
    }
    return maxsum;
    }
};

int main(){
    int t,n;
    cin>>t; 
    while(t--){
        cin>>n; 
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];  
        Solution ob;
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
 

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    void convertToWave(vector<int>& arr, int n){
       sort(arr.begin(),arr.end());
       int i;
       for(i=0;i<n-1;i=i+2){
           swap(arr[i],arr[i+1]);
       }
    } 
};



int main()
{
    int t,n;
    cin>>t; 
    while(t--) 
    {
        cin>>n; 
        vector<int> a(n); 
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        Solution ob;
        ob.convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; 
            
        cout<<endl;
    }
}  

/*
Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
*/

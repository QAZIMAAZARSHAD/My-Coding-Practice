// You are given N ropes. A cut operation is performed on ropes such that all of them are reduced by the length of the smallest rope. 
// Display the number of ropes left after every cut operation until the length of each rope is zero.

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

class Solution{
    public:
        vector<int> RopeCutting(int a[], int n){
        int i, min = INT_MAX;
        vector<int> v;
        for(i=0;i<n;i++){
            if(a[i]<min){
                min = a[i];
            }
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i] - min > 0){
                v.push_back(n-i);
                min = a[i];
            }
        }
        return v;
    }
};

int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
} 

// Input : arr[ ] = {5, 1, 1, 2, 3, 5}
// Output : 4 3 2
// Explanation:
// In the first operation, the minimum ropes 
// are 1 So, we reduce length 1 from all of 
// them after reducing we left with 4 ropes and 
// we do the same for rest.

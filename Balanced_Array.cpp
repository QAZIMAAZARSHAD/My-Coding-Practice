#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       int i, sum1 = 0, sum2 = 0;
       for(i=0;i<n/2;i++){
           sum1 += a[i];
       }
       for(i=n/2;i<n;i++){
           sum2 += a[i];
       }
       return abs(sum1-sum2);
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}  


// Example 1:

// Input:
// N = 4
// arr[] = {1, 5, 3, 2}
// Output: 1

// Example 2:

// Input:
// N = 6
// arr[] = { 1, 2, 1, 2, 1, 3 }
// Output: 2

// You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive). Complexity = O(log N)

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countSetBits(int n)
    {
        if(n==0){
           return 0; 
        } 
        int x = floor(log2(n));
        return (pow(2,x-1)*x) + (n - pow(2,x) + 1) + countSetBits(n-pow(2,x));
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
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;
	  }
	  return 0;
}


// Input: N = 4
// Output: 5
// Explanation:
// For numbers from 1 to 4.
// For 1: 0 0 1 = 1 set bits
// For 2: 0 1 0 = 1 set bits
// For 3: 0 1 1 = 2 set bits
// For 4: 1 0 0 = 1 set bits
// Therefore, the total set bits is 5.

// You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countBitsFlip(int a, int b)
    {
        int res, count = 0;
        res = a^b;
        while (res>0){
            res = res & (res-1);
            count++;
        }
        return count;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--) 
	{
		int a,b;
		cin>>a>>b; 

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  

// Input: A = 10, B = 20
// Output: 4
// Explanation:
// A  = 01010
// B  = 10100
// As we can see, the bits of A that need 
// to be flipped are 01010. If we flip 
// these bits, we get 10100, which is B.

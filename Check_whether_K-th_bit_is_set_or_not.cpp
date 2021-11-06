// Given a number N and a bit number K, check if Kth bit of N is set or not.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool checkKthBit(int n, int k)
    {
        int bits = 0, flag = -1;
        while(n>=0){
            bits = n%2;
            flag++;
            n = n/2;
            if(flag == k){
                if(bits == 1){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int k;
	    cin>>k;
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}  

// Input: N = 4, K = 0
// Output: No
// Explanation: Binary representation of 4 is 100, 
// in which 0th bit from LSB is not set. 
// So, return false.

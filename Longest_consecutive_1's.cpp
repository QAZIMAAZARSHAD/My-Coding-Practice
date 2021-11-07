// Given a number N. Find the length of the longest consecutive 1s in its binary representation.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        int bits,  count = 0, max = INT_MIN;
        if(n == 0){
            return count;
        }
        while(n>0){
            bits = n%2;
            if(bits == 1){
                count++;
                if(count>max){
                    max = count;
                }
            }
            if(bits == 0){
                count = 0;
            }
            n = n/2;
        }
        return max;
    }
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution obj;
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  

// Input: N = 222
// Output: 4
// Explanation: 
// Binary representation of 222 is 
// 11011110, in which 1111 is the 
// longest consecutive set bits of length 4. 

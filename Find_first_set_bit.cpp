// Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
// If there is no set bit in the integer N, then return 0 from the function. 

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    unsigned int getFirstSetBit(int n)
    {
        int bits = 0, flag = 0;
        if(n == 0){
            return flag;
        }
        while(n>0){
            bits = bits + n%2;
            n = n/2;
            flag++;
            if(bits == 1){
                return flag;
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
        int n;
        cin>>n; 
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); 
    }
	return 0;
}


// Input: N = 18
// Output: 2
// Explanation: Binary representation of 
// 18 is 010010,the first set bit from the 
// right side is at position 2.
  
// Input: N = 12 
// Output: 3 
// Explanation: Binary representation 
// of  12 is 1100, the first set bit 
// from the right side is at position 3.

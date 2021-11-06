// Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int posOfRightMostDiffBit(int m, int n)
    {
        int bitn = 0, bitm = 0, flag = 0;
        while(n>=0 && m>=0){
            bitn = bitn + n%2;
            bitm = bitm + m%2;
            flag++;
            if(bitn != bitm){
                return flag;
            }
            n = n/2;
            m = m/2;
        }
    }
};

int main()
{   
    int t;
    cin>>t; 
    while(t--)
    {
         int m,n;
         cin>>m>>n; 
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 

// Input: M = 11, N = 9
// Output: 2
// Explanation: Binary representation of the given 
// numbers are: 1011 and 1001, 
// 2nd bit from right is different.

// Input: M = 52, N = 4
// Output: 5
// Explanation: Binary representation of the given 
// numbers are: 110100 and 0100, 
// 5th-bit from right is different.

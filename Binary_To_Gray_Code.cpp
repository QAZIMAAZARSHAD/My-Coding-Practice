// You are given a decimal number N. You need to find the gray code of the number N and convert it into decimal.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int grayConverter(int n)
    {
        return n^(n>>1);
    }
};

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin >> n;
        Solution ob;
        cout << ob.grayConverter(n) << endl;
    }
}
 

// Input: N = 7
// Output: 4
// Explanation: 7 is represented as 111 in 
// binary form. The gray code of 111 is 100, 
// in the binary form whose decimal equivalent 
// is 4.

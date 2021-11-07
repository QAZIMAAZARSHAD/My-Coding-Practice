// Given a number N. The task is to check whether it is sparse or not. A number is said to be a sparse number if no two or more consecutive bits are set in the binary 
// representation.

#include<iostream>
using namespace std;

class Solution
{
    public:
    bool isSparse(int n)
    {
       int count = 0;
       count = (n & (n>>1));
       if(count != 0){
           return false;
       }
       else{
           return true;
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
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
    }
    return 0;
}

// Input: N = 2
// Output: 1
// Explanation: Binary Representation of 2 is 10, 
// which is not having consecutive set bits. 
// So, it is sparse number.

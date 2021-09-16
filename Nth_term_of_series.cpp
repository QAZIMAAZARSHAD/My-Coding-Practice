/*
n  nth term
1  3
2  8
3  18
4  32
5  60
.
.
.
10  300
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int nthTerm(int n){
       int res;
       res = n*(prime(n)+1); 
       return res;
    }
    
    int prime(int n){
    int i,j,temp,count=0;
    int max=INT_MAX;
    for(i=2;i<=max;i++)
    {
        temp = 0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        {
            count++;
        }
        if(count==n)
        {
            return i;
            break;
        }
    }
  }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n;
        Solution ob;
        cout<<ob.nthTerm(n)<<endl;
    }
    return 0;
}

/*
Input: n = 1
Output: 3 
Explanation: The first term of the series is 3.

Input: n = 2
Output: 8
Explanation: The second term of the series is 3. 
*/

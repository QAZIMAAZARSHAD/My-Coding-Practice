#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool IsPrime(int n){
        int i;
        if(n<2){
            return false;
        }
        if(n == 2 || n == 3){
            return true;
        }
        if(n%2 == 0 || n%3 == 0){
            return false;
        }
        for(i=5;i*i<=n;i=i+6){
            if(n%i == 0 || n%(i+2)==0){
                return false;
            }
        }
        return true;
    }
    int exactly3Divisors(int n)
    {
        int i, count = 0;
        for(i=2;i*i<=n;i++){
           if(IsPrime(i)){
            count++;
        } 
        }
        return count;
    }
};


// Input:
// N = 6
// Output: 1
// Explanation: The only number less than 6 with 
// 3 divisors is 4.
int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  

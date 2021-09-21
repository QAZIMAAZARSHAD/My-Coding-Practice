/*Given an even number N (greater than 2), return two prime numbers whose sum will be equal to given number. There are several combinations possible. 
Print only the pair whose minimum value is the smallest among all the minimum values of pairs.*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

bool isPrime(int n){
        int i;
        if(n<2){
            return false;
        }
        if(n==2 || n==3){
            return true;
        }
        if(n%2==0 || n%3==0){
            return false;
        }
        for(i=5;i*i<=n;i+=6){
            if(n%i == 0 || n%(i+2)==0 ){
                return false;
            }
        }
        return true;
    }
    
    vector<int> primeDivision(int N){
        int i;
        vector<int> v;
        for(i=N-1;i>=2;i--){
            if(isPrime(i) && isPrime(N-i)){
               v.push_back(N-i);
               v.push_back(i);
            }
        }
        return v;
    }   
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  


/*
Example 1:

Input: N = 74
Output: 3 71
Explaination: There are several possibilities 
like 37 37. But the minimum value of this pair 
is 3 which is smallest among all possible 
minimum values of all the pairs.
*/

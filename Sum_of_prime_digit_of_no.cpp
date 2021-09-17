#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int primeSum(int N){
        int i, sum=0, digit;
        while(N){
            digit = N%10;
                if(isPrime(digit)){
                    sum += digit;
                }
                N = N/10;
        }
        return sum;
    }
    
        bool isPrime(int n){
        int i;
        if(n<=1){
            return 0;
        }
        if((n == 2) || (n ==3)){
            return 1;
        }
        if((n%2 == 0) || (n%3 == 0)){
            return 0;
        }
        for(i=5;i*i<n;i=i+6){
            if((n % i == 0) || (n % (i+2)) == 0){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
    

};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}  


/*
Input: 333
Output: 9
Explaination: 3 is a prime number. It 
is present 3 times. So 3+3+3 = 9.

Input: 686
Output: 0
Explaination: Neither 6 nor 8 is a 
prime number.
*/

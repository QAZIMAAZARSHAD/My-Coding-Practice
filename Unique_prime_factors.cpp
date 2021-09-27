#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    int i;
	    vector<int> v;
	    for(i=2;i*i<=N;i++){
	        if(N%i==0){
	            v.push_back(i);
	            while(N%i==0){
	                N/=i;
	            }
	        }
	    }
	    if(N>1)
	    v.push_back(N);
	    return v;
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
} 


// Input: N = 100
// Output: 2 5
// Explanation: 2 and 5 are the unique prime
// factors of 100.

// Input: N = 35
// Output: 5 7
// Explanation: 5 and 7 are the unique prime
// factors of 35.

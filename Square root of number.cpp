#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    long long int floorSqrt(long long int x){
    int i;
    if(x == 2 || x == 1){
        return 1;
    }
    for(i=1;i<x;i++){
        if(i*i==x){
            return i;
        }
        if(i*i>x){
            return i-1;
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
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  

// Input:
// x = 5
// Output: 2
// Explanation: Since, 5 is not a perfect 
// square, floor of square_root of 5 is 2.

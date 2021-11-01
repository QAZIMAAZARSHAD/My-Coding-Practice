#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int digitsInFactorial(int n){
        double res=0;
        int i;
        for(i=1;i<=n;i++){
            res += log10(i);
        }
        return floor(res) + 1;
        
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long Substring(int n, string s){
        int i, count = 0;
        for(i=0;i<n;i++){
            if(s[i] == 's'){
                count++;
            }
        }
        return (count*(count-1))/2;
    }

};


int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.Substring(n, a) << endl;
    }
}

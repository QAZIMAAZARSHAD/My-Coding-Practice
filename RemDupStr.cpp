#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	string removeDups(string str){
	    int i, l;
	    l = str.length();
	    int a[130] = {0};
	    string s;
	    for(i=0;i<l;i++){
	        if(a[str[i]] == 0){
	            a[str[i]] = 1;
	            s += str[i];
	        }
	    }
	    return s;
	}
};

int main(){
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   	int t;
   	cin >> t;
   	while(t--){
   		string s;
   		cin >> s;
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   	}
    return 0;
}  


// Input: S = "zvvo"
// Output: "zvo"
// Explanation: Only keep the first
// occurrence

// Note: The original order of characters must be kept the same. 

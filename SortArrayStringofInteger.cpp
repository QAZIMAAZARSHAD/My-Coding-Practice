#include<bits/stdc++.h>
using namespace std;

static bool cmp(string a, string b){
    if(a.size() == b.size()){
        return a<b;
    }
    return a.size()<b.size();
}

int main(){
        vector<string> a = {"2","21","12","1"};
        int i, n = a.size();
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        sort(a.begin(), a.end(), cmp);
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        return 0;
    }

// Input: a = ["2","21","12","1"]
// Output: ["1","2","12","21"]

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, rev;
	cin>>s;
	rev = s;
	reverse(rev.begin(),rev.end());
	if(s == rev){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not Palindrome";
	}
	return 0;
}

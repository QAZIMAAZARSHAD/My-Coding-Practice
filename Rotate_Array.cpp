// Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

#include <iostream>
using namespace std;

int main() {
	int i, n, d, t;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>d;
	    int a[n], temp[d];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(i=0;i<d;i++){
	        temp[i] = a[i];
	    }
	    for(i=0;i<(n-d);i++){
	        a[i] = a[i+d];
	        cout<<a[i]<<" ";
	    }
	    for(i=0;i<d;i++){
	        cout<<temp[i]<<" ";
	    }
	    cout<<endl;
	   
	}
	
	return 0;
}



/* 

Example:

Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6 

*/

// Output All Unique Elements 

int firstNonRepeating(int a[], int n){
        int i;
        vector<int> v, temp;
        for(i=0;i<n;i++){
            temp.push_back(a[i]);
        }
        sort(a, a+n);
        if(a[0] != a[1]){
            v.push_back(a[0]);
        }
        for(i=1;i<n;i++){
            if(a[i] != a[i-1] && a[i] != a[i+1]){
                v.push_back(a[i]);
            }
        }
        if(a[n-1] != a[n-2]){
            v.push_back(a[n-1]);
        }
        for(i=0;i<n;i++){
            if(find(v.begin(), v.end(), temp[i]) != v.end()){
                return temp[i];
            }
        }
        return 0;
    }


// Return All Unique Elements (without sorting) & (without changing actual order)



// Remove Duplicates

int removeDuplicates(vector<int>& a) {
        int i, j = 0, n;
        n = a.size();
        sort(a.begin(), a.end());
        for(i=0;i<n;i++){
            if(i<n-1 && a[i] == a[i+1]){
                continue;
            }
            a[j] = a[i];
            j++;
        }
        for(i=j;i<n;i++){
            a.pop_back();
        }
        return a.size();
    }

// Remove Duplicates (without sorting) & (without changing actual order)

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

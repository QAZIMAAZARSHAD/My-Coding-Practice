// Cyclically rotate an array by one (right)anticlock-wise
void rotate(int a[], int n){
    int i, temp;
    temp = a[0];
    for(i=0;i<n;i++){
        a[i] = a[i+1];
    }
    a[n-1] = temp;
}

// Cyclically rotate an array by one (left)clock-wise
void rotate(int a[], int n){
    int i, temp;
    temp = a[n-1];
    for(i=n-1;i>0;i--){
        a[i] = a[i-1];
    }
    a[0] = temp;
}

// Rotate the array to the left (counter-clockwise direction) by k steps
void rotateArr(int a[], int k, int n){
        reverse(a, a + k);
        reverse(a + k, a + n);
        reverse(a, a + n);
}

// Rotate the vector to the left (counter-clockwise direction) by k steps
void rotate(vector<int>& a, int k) {
        reverse(a.begin(), a.begin()+k);
        reverse(a.begin()+k, a.end());
        reverse(a.begin(), a.end());
}

// Rotate the array to the right (clockwise direction) by k steps
void RightRotate(int a[], int n, int k){
	k = k % n;
    reverse(a, a + n);
    reverse(a, a + k);
    reverse(a + k, a + n);
}

// Rotate the vector to the right (clockwise direction) by k steps
void rotate(vector<int>& a, int k) {
        int n = a.size();
        k = k % n;
        reverse(a.begin(), a.end());
        reverse(a.begin(), a.begin() + k);
        reverse(a.begin() + k, a.end());
}

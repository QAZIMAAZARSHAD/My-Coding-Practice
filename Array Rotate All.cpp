// Cyclically rotate an array by one anticlock-wise
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

// Rotate the array to the left (counter-clockwise direction) by D steps
void rotateArr(int a[], int d, int n){
        reverse(a,a+d);
        reverse(a+d,a+n);
        reverse(a,a+n);
}

// Rotate the array to the right (clockwise direction) by D steps

//3. Check if array is sorted 

int issorted(int n ,vector<int> a) {
    for(int i=1; i<n;i++) {
        if(a[i] >= a[i-1]) {

        }
        else {
            return false;
        }
    }
    return true ;
}
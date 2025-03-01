
// 8. Linear Search

int linearSearch(int n,int num,vector<int> &) {
    for(int i=0;i<num;i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

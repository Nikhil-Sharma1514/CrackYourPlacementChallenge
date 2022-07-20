vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long sum=0,n=A.size(), ans1;
    vector<long long> v(n+1, 0);
    for(int i=0;i<n;i++){
        sum+=A[i];
        if(v[A[i]]==0){
            v[A[i]]++;
        }
        else{
            ans1=A[i];
        }
    }
    long long ans2 = (n*(n+1)/2)-sum+ans1;
    return {ans1,ans2};
}

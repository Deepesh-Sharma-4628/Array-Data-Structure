pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long>ans;
    long long maxi=INT_MIN;
    long long mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>maxi)
        maxi=a[i];
        if(a[i]<mini)
        mini=a[i];
    }
    ans=make_pair(mini,maxi);
    return ans;
}
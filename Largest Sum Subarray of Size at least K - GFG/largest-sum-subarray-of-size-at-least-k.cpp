// { Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

long long int maxSumWithK(long long int a[], long long int n, long long int k);

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        cout << maxSumWithK(a, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends


long long int maxSumWithK(long long int a[], long long int n, long long int k) 
{
    long long int ans=INT_MIN;
    long long int maxS[n];
    long long int csum=a[0];
    maxS[0]=csum;
    for(long long int i=1;i<n;i++){
        if(csum>0){
            csum+=a[i];
        }
        else{
            csum=a[i];
        }
        maxS[i]=csum;
        
    }
    long long int atleastK=0;
    for(long long int i=0;i<k;i++){
        atleastK+=a[i];
    }
    if(atleastK>ans){
        ans=atleastK;
    }
    for(long long int i=k;i<n;i++){
        atleastK+=a[i]-a[i-k];
        if(atleastK>ans){
            ans=atleastK;
        }
        
        long long int moreK=0;
        moreK=atleastK+maxS[i-k];
        if(moreK>ans){
            ans=moreK;
        }
    }
    return ans;
    
}
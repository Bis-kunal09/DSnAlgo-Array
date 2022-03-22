// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int mini=0;
	    int l=0;
	    int r=n-1;
	    while(l<=r){
	        int mid=(l+r)/2;
	        
	        if(arr[mid]<arr[mini]){
	            mini=mid;
	            
	            r=mid-1;
	            
	        }
	        else{
	            l=mid+1;
	        }
	    }
	    if(mini==INT_MAX){
	        return -1;
	    }
	    return mini;
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
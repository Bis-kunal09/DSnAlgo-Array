// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        long long  l=0;
        long long mini=INT_MIN;
        long long ans=-1;
        long long  r=n-1;
        while(l<=r){
            long long mid=(l+r)/2;
            if(v[mid]<=x){
                if(v[mid]>mini){
                    mini=v[mid];
                    ans=mid;
                }
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(mini==INT_MIN){
            return -1;
        }
        return ans;
        
    }
};


// { Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}  // } Driver Code Ends
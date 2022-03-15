// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int sum) 
    { 
        unordered_map<int,int> mp;
        int res=0;
        int psum=0;
        for(int i=0;i<n;i++){
            psum+=arr[i];
            if(psum==sum){
                res=i+1;
            }
            if(mp.find(psum)==mp.end()){
                mp[psum]=i;
            }
            if(mp.find(psum-sum)!=mp.end()){
                res=max(res,i-mp[psum-sum]);
            }
            
        }
        return res;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
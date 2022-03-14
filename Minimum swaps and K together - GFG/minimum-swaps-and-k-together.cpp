// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        int cnt=0;
        int bd=0;
        for(int i=0;i<n;i++){
            
        
            if(arr[i]<=k){
                cnt++;
            }
        }
        for(int i=0;i<cnt;i++){
            if(arr[i]>k){
                bd++;
            }
        }
        int sbd=bd;
        for(int i=0,j=cnt;j<n;i++,j++){
            if(arr[i]>k){
                sbd-=1;
            }
            
            if(arr[j]>k){
                sbd+=1;
            }
        
            bd=min(sbd,bd);
        }
        return bd;
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends
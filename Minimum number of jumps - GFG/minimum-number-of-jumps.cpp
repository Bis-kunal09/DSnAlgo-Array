// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int maxi=arr[0];
        int step=arr[0];
        int jump=1;
        if(n==1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        for(int i=1;i<n;i++){
            if(i==n-1){
                return jump;
            }
            maxi=max(maxi,i+arr[i]);
            step--;
            if(step==0){
                jump++;
                if(i>=maxi){
                    return -1;
                }
                step=maxi-i;
            }
        }
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
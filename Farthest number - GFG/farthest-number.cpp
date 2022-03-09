// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    // int binary(vector<int> arr,int s,int e,int n){
    //     int mini=-1;
    //     while(s<=e){
    //         int mid=s+(e-s)/2;
    //         if(arr[mid]<n){
    //             mini=mid;
    //             s=mid+1;
    //         }
    //         else{
    //             e=mid-1;
    //         }
    //     }
    //     return mini;
    // }
    // vector<int> farNumber(int N,vector<int> arr){
    //     vector<int> mini(N);
    //     vector<int> ans(N);
    //     mini[N-1]=arr[N-1];
        
    //     for(int i=N-2;i>=0;i--){
    //         mini[i]=min(mini[i+1],arr[i]);
    //     }
    //     for(int i=0;i<N;i++){
    //         ans[i]=binary(mini,i,N-1,arr[i]);
    //     }
    //     return ans;
    // }
      vector<int> farNumber(int N,vector<int> Arr){
        //code here
        vector<int>ans;
        for(int i=0;i<N;i++){
            int j=N-1;
            while(j>=i){
                if(Arr[i]>Arr[j]){
                    ans.push_back(j);
                    break;
                }
                if(i==j){
                    ans.push_back(-1);
                }
                j--;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends
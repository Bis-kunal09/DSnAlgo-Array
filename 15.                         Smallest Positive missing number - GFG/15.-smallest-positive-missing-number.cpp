// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) {
    // {   
    //     unordered_set<int> uo;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]>0){
    //             uo.insert(arr[i]);
    //         }
    //     }
    //     int res=-1;
    //     for(int i=1;i<uo.size();i++){
    //         if(uo.count(i)==0){
    //             res=i;
    //             break;
    //         }
    //     }
    //     if(res==-1){
    //         return uo.size()+1;
    //     }
    //     return res;
     unordered_set<int> us;
        
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                us.insert(arr[i]);
                
            }
        }
        int res=-1;
        for(int i=1;i<us.size()+1;i++){
            if(us.count(i)==0){
                res=i;
                break;
            }
        }
        if(res==-1){
            return us.size()+1;
        }
        return res;
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
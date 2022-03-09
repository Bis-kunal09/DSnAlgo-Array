// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverse(vector<long long> &arr,int l,int r){
        while(l<=r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int r=n/k;
        int s=0;
        int e=k-1;
        while(r--){
            reverse(arr,s,e);
            s=e+1;
            e=e+k;
            
            
        }
        reverse(arr,s,n-1);
        
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends
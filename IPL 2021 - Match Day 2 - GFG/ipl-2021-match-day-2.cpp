// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        list<int> q;
        int maxi=INT_MIN;
        vector<int> ans;
        int i=0;
        int j=0;
        while(j<n){
            if(q.empty()){
                q.push_back(arr[j]);
            }
            else{
               while(q.empty()==false&&q.back()<arr[j]){
                    q.pop_back();
                } 
                q.push_back(arr[j]);
            }
            
            
            if(j-i+1==k){
                ans.push_back(q.front());
                if(arr[i]==q.front()){
                    q.pop_front();
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends
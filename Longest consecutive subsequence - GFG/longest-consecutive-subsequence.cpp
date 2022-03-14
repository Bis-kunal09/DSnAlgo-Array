// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        unordered_set<int> st;
        for(int i=0;i<N;i++){
            st.insert(arr[i]);
        }
        int longest=0;
        for(auto x:st){
            if(!st.count(x-1)){
                int cst=1;
                int num=x;
                while(st.count(num+1)){
                    cst+=1;
                    num+=1;
                }
                longest=max(longest,cst);
            }
        }
        return longest;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
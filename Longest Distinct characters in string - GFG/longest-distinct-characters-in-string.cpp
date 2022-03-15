// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    unordered_map<int,int> mp;
    int i=0;
    int j=0;
    int len=INT_MIN;
    while(j<S.size()){
        mp[S[j]]++;
        if(mp.size()==j-i+1){
            len=max(len,j-i+1);
        }
        if(j-i+1>mp.size()){
            while(j-i+1>mp.size()){
                mp[S[i]]--;
                if(mp[S[i]]==0){
                    mp.erase(S[i]);
                }
                i++;
            }
        }
        j++;
    }
    return len;
}
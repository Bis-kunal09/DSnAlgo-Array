// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        
        unordered_map<char,int> mp;
        for(int i=0;i<p.size();i++){
            mp[p[i]]++;
        }
        int count=mp.size();
        int i=0;
        int j=0;
        int mini=INT_MAX;
        int start=0;
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }
            if(count==0){
                while(count==0){
                    if(mini>j-i+1){
                        mini=j-i+1;
                        start=i;
                    }
                    if(mp.find(s[i])!=mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]]>0){
                            count++;
                        }
                        
                    }
                    i++;
                    
                }
            
            
            }
            j++;
            
        }
        if(mini==INT_MAX){
            return "-1";
        }
        return s.substr(start,mini);
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
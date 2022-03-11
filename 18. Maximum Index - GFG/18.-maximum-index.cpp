// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        int lr[N],rl[N],res=0;
        lr[0]=A[0];
        for(int i=1;i<N;i++){
            lr[i]=min(lr[i-1],A[i]);
            
        }
        rl[N-1]=A[N-1];
        for(int i=N-2;i>=0;i--){
            rl[i]=max(A[i],rl[i+1]);
        }
        int  i = 0, j = 0, maxDiff = -1;
        while (j < N && i < N) {
            if (lr[i] <= rl[j]) {
                maxDiff = max(maxDiff, j - i);
                j = j + 1;
            }
            else
                i = i + 1;
        }
 
        return maxDiff;
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
    
        int arr[maxx+1]={0};
        
        for(int j=0;j<n;j++){
            if(L[j]<R[j]){
                for(int i=L[j];i<=R[j];i++){
                    arr[i]+=1;
                }
            }
            else{
                for(int i=R[j];i<=L[j];i++){
                    arr[i]+=1;
                }
                
            }
        }
        int max=0;
        int imdex=0;
        for(int i=0;i<maxx+1;i++){
           
            if(arr[i]>max){
                max=arr[i];
                imdex=i;
            }
            
            
        }
        return imdex;
        
        
        
    }
};


// { Driver Code Starts.

int main() {
	
	int t;
	
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n;
	    
	    //taking size of array
	    cin >> n;
	    int L[n];
	    int R[n];
	    
	    //adding elements to array L
	    for(int i = 0;i<n;i++){
	        cin >> L[i];
	    }
	    
	    int maxx = 0;
	    
	    //adding elements to array R
	    for(int i = 0;i<n;i++){
	        
	        cin >> R[i];
	        if(R[i] > maxx){
	            maxx = R[i];
	        }
	    }
	    Solution ob;
	    
	    //calling maxOccured() function
	    cout << ob.maxOccured(L, R, n, maxx) << endl;
	}
	
	return 0;
}  // } Driver Code Ends
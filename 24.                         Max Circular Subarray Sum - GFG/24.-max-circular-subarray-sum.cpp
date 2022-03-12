// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadane(int arr[],int n){
        int ending=arr[0];
        int res=arr[0];
        for(int i=1;i<n;i++){
            ending=max(arr[i],ending+arr[i]);
            res=max(res,ending);
        }
        return res;
    }
    int circularSubarraySum(int arr[], int num){
        int linear=kadane(arr,num);
        if(linear<0){
            return linear;
        }
        int sum=0;
        for(int i=0;i<num;i++){
            sum+=arr[i];
            arr[i]=-arr[i];
        }
        int circular=sum+kadane(arr,num);
        return max(linear,circular);
        
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
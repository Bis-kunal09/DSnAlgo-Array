class Solution {
public:
    int binarys(vector<int> nums,int l,int r,int target){
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int l=0;
        int r=nums.size()-1;
        int mini=0;
        while(l<=r){
           int mid=(l+r)/2;
           if(nums[mid]<nums[mini]){
               mini=mid;
               r=mid-1;
               
           }
           else{
            l=mid+1;     
           } 
        }
        int a=binarys(nums,0,mini-1,target);
        int b=binarys(nums,mini,nums.size()-1,target);
        if(a!=-1){
            return a;
        }
        else{
            return b;
        }
        
        
        
    }
};
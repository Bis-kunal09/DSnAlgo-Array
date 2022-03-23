class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(mid>0&&mid<nums.size()-1){
                if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){
                    return mid;
                }
                else if(nums[mid]<nums[mid-1]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else if(mid==0){
                if(nums[mid]>nums[mid+1]){
                    return mid;
                }
                else{
                    return mid+1;
                }
            }
            else if(mid==nums.size()-1){
                if(nums[mid]>nums[mid-1]){
                    return mid;
                }
                else{
                    return mid-1;
                }
            }
        }
        return -1;
        
        
    }
};
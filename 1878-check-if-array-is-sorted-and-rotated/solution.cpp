class Solution {
public:
    bool check(vector<int>& nums) {
        // int low=0,high=nums.size()-1;
        // int mid=low+(high-low)/2;
        // if(nums[low]<=nums[mid]){
        //     return true;
        //     low=mid+1;
        // }
        // else if(nums[mid]<=nums[high]){
        //     return true;
        //     high=mid-1;
        // }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                count++;
                // return false;
            }
        }
            return count<=1;
        // return false;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>nums[i+1])return false;
        // }
        // return true;
    }
};

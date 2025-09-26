class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int start=0,end=nums.size()-1,ans=0;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==k){
                return true;
            }
            if(nums[start]==nums[mid] && nums[mid]==nums[end]){
                end=end-1;
                start=start+1;
                continue;
            }
            if(nums[start]<=nums[mid]){
                if(nums[start]<=k && k<=nums[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else{
                if(nums[mid]<=k && k<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return false;
    }
};

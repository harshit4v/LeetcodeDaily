class Solution {
    private:
    int countSubarrays(vector<int>&nums,int maxSum){
        int n=nums.size();
        int subarrays=1;
        int currentsum=0;
        for(int i=0;i<n;i++){
            if(currentsum+nums[i]<=maxSum){
                currentsum+=nums[i];
            }
            else{
                subarrays++;
                currentsum=nums[i];
            }
        }
        return subarrays;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int sub=countSubarrays(nums,mid);
            if(sub>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};

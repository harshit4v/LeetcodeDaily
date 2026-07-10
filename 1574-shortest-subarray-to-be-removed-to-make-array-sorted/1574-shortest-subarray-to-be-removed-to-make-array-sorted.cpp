class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& nums) {
        int n=nums.size();
        int pre=0,suff=nums.size()-1;
        while(pre + 1 < nums.size() && nums[pre]<=nums[pre+1]){
                pre++;
        }
        if(pre==n-1){
            return 0;
        }
        while(suff - 1 >= 0 && nums[suff]>=nums[suff-1]){
                suff--;
        }
        int ans=min(n-pre-1,suff);
        int left=0,right=suff;
        while(left<=pre && right<n){
            if(nums[left]<=nums[right]){
                ans=min(ans,right-left-1);
                left++;
            }
            else{
                right++;
            }
        }
        return ans;
    }
};
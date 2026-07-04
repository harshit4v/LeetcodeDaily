class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
    int pre=nums[0];
        int ans=INT_MIN;
    for(int j=k;j<n;j++){
        pre=max(pre,nums[j-k]);
        ans=max(ans,pre+nums[j]);
    }
        return ans;
    }
};

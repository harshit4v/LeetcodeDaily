class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int cnt=0;
        int maxLen=0;
        int prefixsum=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            int rem=prefixsum-goal;
            cnt+=mpp[rem];
            mpp[prefixsum]+=1;
        }
        return cnt;
    }
};
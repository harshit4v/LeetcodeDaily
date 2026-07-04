class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int cnt=0,prefixsum=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i]%2;
            int rem=(prefixsum-k);
            cnt+=mpp[rem];
            mpp[prefixsum]+=1;
        }
        return cnt;
    }
};
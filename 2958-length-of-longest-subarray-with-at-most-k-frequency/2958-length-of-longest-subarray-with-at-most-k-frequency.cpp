class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int maxlen=0,j=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(i>j && mp[nums[i]]>k){
                mp[nums[j]]--;
                j++;
            }
            maxlen=max(maxlen,i-j+1);
        }
        return maxlen;
    }
};
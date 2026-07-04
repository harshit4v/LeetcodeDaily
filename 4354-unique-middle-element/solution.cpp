class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int c:nums){
            mpp[c]++;
        }
        if(mpp[nums[n/2]]>1){
            return false;
        }
        return true;
    }
};

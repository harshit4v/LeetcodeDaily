class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            for(int j=nums[i]+1;j<nums[i+1];j++){
                res.push_back(j);
            }
        }
        return res;
    }
};
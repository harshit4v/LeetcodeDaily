class Solution {
public:
    vector<int> findOriginalArray(vector<int>& nums) {
        int n=nums.size();
        if(n%2!=0){
            return {};
        }
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(mpp[nums[i]]==0){
                continue;
            }
            if(mpp.find(nums[i]*2)==mpp.end() || mpp[nums[i]*2]==0){
                return {};
            }
            res.push_back(nums[i]);
            mpp[nums[i]]--;
            mpp[nums[i]*2]--;
        }
        return res;
    }
};

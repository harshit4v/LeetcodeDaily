class Solution {
public:
    void func(int ind,int sum,vector<int>&nums,vector<int>&arr,vector<vector<int>>&result){
        if(sum==0){
            result.push_back(arr);
            return;
        }
        if(sum<0 || ind==nums.size()){
            return;
        }
        arr.push_back(nums[ind]);
        func(ind+1,sum-nums[ind],nums,arr,result);
        arr.pop_back();
        for(int j=ind+1;j<nums.size();j++){
            if(nums[j]!=nums[ind]){
                func(j,sum,nums,arr,result);
                break;
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int>arr;
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        func(0,target,nums,arr,result);
        return result;
    }
};

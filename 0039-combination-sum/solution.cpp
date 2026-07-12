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
        func(ind,sum-nums[ind],nums,arr,result);
        arr.pop_back();
        func(ind+1,sum,nums,arr,result);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>arr;
        vector<vector<int>>result;
        func(0,target,nums,arr,result);
        return result;
    }
};

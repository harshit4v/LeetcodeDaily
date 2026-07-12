class Solution {
public:
    void func(int ind,int n,vector<int>&nums,vector<int>&arr,vector<vector<int>>&result){
        if(ind==n){
            result.push_back(arr);
            return;
        }
        arr.push_back(nums[ind]);
        func(ind+1,n,nums,arr,result);
        arr.pop_back();
        func(ind+1,n,nums,arr,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr;
        vector<vector<int>>result;
        func(0,nums.size(),nums,arr,result);
        return result;
    }
};

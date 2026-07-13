class Solution {
public:
    void func(int ind,vector<int>&arr,vector<int>&nums,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[ind]);
        func(ind+1,arr,nums,ans);
        arr.pop_back();
        int j=ind+1;
        while(j<nums.size() && nums[ind]==nums[j]){
            j++;
        }
        func(j,arr,nums,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>arr;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        func(0,arr,nums,ans);
        return ans;
    }
};

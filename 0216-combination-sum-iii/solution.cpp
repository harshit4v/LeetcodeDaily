class Solution {
public:
void func(int n,int last,vector<int>&nums,int k,vector<vector<int>>&ans){
        if(n==0 && nums.size()==k){
            ans.push_back(nums);
            return;
        }
        if(n<=0 || nums.size()>k)return;
        for(int i=last;i<=9;i++){
            if(i<=n){
                nums.push_back(i);
                func(n-i,i+1,nums,k,ans);
                nums.pop_back();
            }
            else{
                break;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums;
        vector<vector<int>>ans;
        func(n,1,nums,k,ans);
        return ans;
    }
};

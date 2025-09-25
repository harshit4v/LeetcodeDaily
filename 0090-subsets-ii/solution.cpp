class Solution {
    private:
    void func(int ind,vector<int>&v,vector<int>&v2,vector<vector<int>>&ans){
        if(ind==v2.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(v2[ind]);
        func(ind+1,v,v2,ans);
        v.pop_back();
        for(int j=ind+1;j<v2.size();j++){
            if(v2[j]!=v2[ind]){
                func(j,v,v2,ans);
                return;
            }
        }
        func(v2.size(),v,v2,ans);
    }
public:
    vector<vector<int> > subsetsWithDup(vector<int>& nums) {
        //your code goes here
        vector<vector<int>>ans; 
        vector<int>v;
        sort(nums.begin(),nums.end());
        func(0,v,nums,ans);
        return ans;
    }
};

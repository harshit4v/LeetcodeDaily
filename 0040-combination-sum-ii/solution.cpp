class Solution {
    private:
    void func(int i,int sum,vector<int>&v,vector<int>&v2,vector<vector<int>>&ans){
        if(sum==0){
            ans.push_back(v2);
            return;
        }
        if(sum<0 || i==v.size()){
            return;
        }
        v2.push_back(v[i]);
        func(i+1,sum-v[i],v,v2,ans);
        v2.pop_back();
        for(int j=i+1;j<v.size();j++){
            if(v[j]!=v[i]){
                func(j,sum,v,v2,ans);
                break;
            }
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>v;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        func(0,target,candidates,v,ans);
        return ans;
    }
};

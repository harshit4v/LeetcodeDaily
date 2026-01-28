class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // if(nums.size()==0)return 0;
        int diff=nums[0]-nums[1],mini=INT_MAX;
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-1;i++){
            int j=i+1;
            diff=abs(nums[j]-nums[i]);
            if(mini>diff){
            ans.clear();
            mini=diff;
            ans.push_back({nums[i],nums[j]});
            }
            else if( mini==diff){
            ans.push_back({nums[i],nums[j]});
            }
        }
        return ans;
    }
};

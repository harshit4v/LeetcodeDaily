class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<pair<int,int>>temp;
        int min=0;
        for(int i=0;i<nums.size()-1;i+=2){
            if(nums[i]<=nums[i+1]){
                temp.push_back({nums[i],i});
            }
        }
        for(int i=0;i<temp.size();i++){
            min+=temp[i].first;
        }
        // free(temp);
        return min;
        // int n = nums.size();
        // sort(nums.begin(),nums.end());
        // int ans = 0;
        // for(int i = 0;i<n;i+=2){
        //     ans += min(nums[i],nums[i+1]);
        // }
        // return ans;
    }
};

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>st;
        int low=0,high=nums.size()-1;
        int sum=0;
        while(low<high){
            sum=nums[low]+nums[high];
            st.insert(sum);
            low++;
            high--;
        }
        return st.size();
    }
};
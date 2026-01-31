class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int mid=n;
        // int j=mid;
        vector<int>ans;
        int i=0;
        while(mid!=nums.size()){
            ans.push_back(nums[i]);
            ans.push_back(nums[mid]);
            i++;
            mid++;
        }
        return ans;
    }
};

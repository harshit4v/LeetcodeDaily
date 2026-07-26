class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int size=nums.size();
        sort(begin(nums),end(nums));
        return max((nums[size-1]*nums[size-2]*nums[size-3]),(nums[0]*nums[1]*nums[size-1]));
    }
};
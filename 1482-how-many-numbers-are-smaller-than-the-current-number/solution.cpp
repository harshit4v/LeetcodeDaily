class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         vector<int> freq(101, 0);

        // count frequency
        for (int x : nums)
            freq[x]++;

        // prefix sum: how many numbers are smaller
        for (int i = 1; i <= 100; i++)
            freq[i] += freq[i - 1];

        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                ans[i] = 0;
            else
                ans[i] = freq[nums[i] - 1];
        }

        return ans;
    }
};

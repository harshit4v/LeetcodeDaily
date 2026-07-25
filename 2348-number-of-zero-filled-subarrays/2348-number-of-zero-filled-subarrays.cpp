class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                int cnt = 0;
                while (i < n && nums[i] == 0) {
                    i++;
                    cnt++;
                }
                ans += (long long)cnt * (cnt + 1) / 2;
            }
        }
        return ans;
    }
};
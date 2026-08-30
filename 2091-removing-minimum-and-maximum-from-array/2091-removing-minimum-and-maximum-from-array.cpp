class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        int minPos = -1, maxPos = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == mini)
                minPos = i;

            if (nums[i] == maxi)
                maxPos = i;
        }
        int left = min(minPos, maxPos);
        int right = max(minPos, maxPos);
        // 1. Remove both from left
        int option1 = right + 1;
        // 2. Remove both from right
        int option2 = n - left;
        // 3. Remove one from left and one from right
        int option3 = (left + 1) + (n - right);
        return min({option1, option2, option3});
    }
};
class Solution {
public:
int MOD = 1e9 + 7;
    int dp[201][201][201];

    int solve(int ind, int g1, int g2, vector<int>& nums)
    {
        if(ind == nums.size())
        {
            return (g1 == g2 && g1 != 0);
        }

        if(dp[ind][g1][g2] != -1)
            return dp[ind][g1][g2];

        long long ans = 0;

        // Ignore
        ans += solve(ind + 1, g1, g2, nums);

        // Put in seq1
        int ng1 = (g1 == 0) ? nums[ind] : __gcd(g1, nums[ind]);
        ans += solve(ind + 1, ng1, g2, nums);

        // Put in seq2
        int ng2 = (g2 == 0) ? nums[ind] : __gcd(g2, nums[ind]);
        ans += solve(ind + 1, g1, ng2, nums);

        return dp[ind][g1][g2] = ans % MOD;
    }

    int subsequencePairCount(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, 0, nums);
    }
};
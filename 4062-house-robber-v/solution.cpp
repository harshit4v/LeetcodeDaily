class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        vector<long long>dp(n,0);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            if(colors[i]==colors[i-1]){
                long long t=nums[i];
                if(i>=2)t+=dp[i-2];
                long long s=dp[i-1];
                dp[i]=max(t,s);
            }
            else{
                dp[i]=dp[i-1]+nums[i];
            }
        }
        return dp[n-1];
    }
};

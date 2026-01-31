class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // vector<int>ans;
        int n=nums.size();
        long long  S=(long long)(n*(n+1))/2;
        long long S2 = (long long)n * (n+1) * (2*n+1) / 6;
        long long  SN=0;
        long long  S2N=0;
        for(int i=0;i<nums.size();i++){
            SN+=nums[i];
            S2N+=(long long int)nums[i]*(long long int)nums[i];
        }
        long long  val1=SN-S;
        long long  val2=S2N-S2;
        val2=val2/val1;
        long long  x=(val1+val2)/2;
        long long  y=x-val1;
        return {(int)x,(int)y};
    }
};

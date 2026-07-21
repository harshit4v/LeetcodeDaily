class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int i=0,j=0;
        int n=nums.size();
        int cntmax=0;
        long long result=0;
        while(j<n){
            if(nums[j]==maxi){
                cntmax++;
            }
            while(cntmax>=k){
                result+=n-j;
                if(nums[i]==maxi){
                    cntmax--;
                }
                i++;
            }
            j++;
        }
        return result;
    }
};
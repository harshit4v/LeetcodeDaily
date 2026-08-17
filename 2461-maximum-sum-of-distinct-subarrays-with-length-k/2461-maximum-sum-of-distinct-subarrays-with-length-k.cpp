class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        unordered_set<int>st;
        long long  sum=0,result=0;
        while(j<n){
            while(st.find(nums[j])!=st.end()){
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            st.insert(nums[j]);
            sum+=nums[j];
            if(j-i+1==k){
                result=max(result,sum);
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
        return result;
    }
};
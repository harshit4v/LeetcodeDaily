class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int pro=1;
        int left=0,right=0,cnt=0;
        while(right<n){
            pro*=nums[right];
            while(pro>=k){
                pro/=nums[left];
                left++;
            }
            cnt+=1+(right-left);
            right++;
        }
        return cnt;
    }
};

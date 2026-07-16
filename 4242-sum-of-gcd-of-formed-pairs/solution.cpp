class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefixgcd(nums.size());
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            prefixgcd[i]=__gcd(nums[i],maxi);
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        long long sum=0;
        int l=0;
        int r=prefixgcd.size()-1;
        while(l<r){
            sum+=__gcd(prefixgcd[l],prefixgcd[r]);
            l++;
            r--;
        }
        return sum;

    }
};

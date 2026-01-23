class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minp=nums[0],pro=0,maxp=0;
        for(int i=0;i<nums.size();i++){
            // int j=0;
            // while(j!=i){
            //     if(nums[j]<nums[j+1]){
            //         minp=min(minp,nums[j]);
            //     }
            //     j++;
            // }
            if(nums[i]<minp){
                minp=nums[i];
            }
            pro=nums[i]-minp;
            maxp=max(maxp,pro);
        }
        return maxp;
    }
};
